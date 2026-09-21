//   THIS IS FIRST SKETCH FOR PID ALGORITHM
//   IT IMPROVES UPON PREVIOUS SENSOR READING ALGORITHMS AND THE SPEED ADJUSTMENT ALGORITHM
//   THIS IS NOT FINAL, BEING MADE WITHOUT THE ACTUAL ROBOT COMPONENTS CURRENTLY
//   AFTER TESTING WITH BUILT ROBOT THIS CAN BE IMPROVED AND FINALIZED

#define irL2 8
#define irL1 9
#define irM 10    // pins of sensors, same as before
#define irR1 11
#define irR2 12

float baseSpeed = 150.0;    // the speeds will need to be converted to integer since movement functions take integer paramater
float leftSpeed;            // also they will need to take 2 parameters for speed
float rightSpeed;

float error;
float previousError = 0;

unsigned long _currentTime;   // variables used to calculate delta time
unsigned long _lastTime;

float Kp = 10.0;
float Ki = 0.1;   // constants used to calculate PID, have to be adjusted and finetuned after testing
float Kd = 2.0;

void setup() {
  pinMode(irL2, INPUT);
  pinMode(irL1, INPUT);
  pinMode(irM, INPUT);
  pinMode(irR1, INPUT);
  pinMode(irR2, INPUT);

  Serial.begin(9600);
}

void loop() {
  error = ReadSensors();
  Serial.println();
  float outputPID = CalculatePID();
  
  Serial.println();
  Serial.println(); // leaves blank line in between

  leftSpeed = baseSpeed - outputPID; // adjusts speed of left and right motors according to PID output
  rightSpeed = baseSpeed + outputPID;

  if (leftSpeed > 255.0){
    leftSpeed = 255.0;    // ensures speed does not exceed 255
  }
  else if (leftSpeed < 0.0){
    leftSpeed = 0.0;  // ensures speed is not negative
  }
  
  if (rightSpeed > 255.0){
    rightSpeed = 255.0;
  }
  else if (rightSpeed < 0.0){
    rightSpeed = 0.0;
  }
  Serial.println("left motor speed is: "+String(leftSpeed)+" | right motor speed is: "+String(rightSpeed));

  //  movement functions, called according to error like before 
  //  however selection statement will need to be changed to account for the range of error values instead of 5 set line posititon values
  if (error == 0){
    // forward moving function
    Serial.print("forward");
  }
  else if (error>0 && error<=2){  // line is slightly left
    // left moving function
    Serial.print("left");
  }
  else if (error>2 && error<=4){  // line is sharp left
    // left turning function
    Serial.print("left point turn"); 
  }
  else if (error<0 && error>=-2){  // line is slightly right
    // right moving function
    Serial.print("right");
  }
  else if (error<-2 && error>=-4){  // line is sharply right
    // right turning function
    Serial.print("right point turn");
  }


  Serial.println();
  Serial.println(); // leaves blank line in between
}
