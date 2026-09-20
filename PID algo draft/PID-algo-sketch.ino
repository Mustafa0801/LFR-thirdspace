//   THIS IS FIRST SKETCH FOR PID ALGORITHM
//   IT IMPROVES UPON PREVIOUS SENSOR READING ALGORITHMS AND THE SPEED ADJUSTMENT ALGORITHM
//   THIS IS NOT FINAL, BEING MADE WITHOUT THE ACTUAL ROBOT COMPONENTS CURRENTLY
//   AFTER TESTING WITH BUILT ROBOT THIS CAN BE IMPROVED AND FINALIZED

#define irL2 8
#define irL1 9
#define irM 10    // pins of sensors, same as before
#define irR1 11
#define irR2 12

float baseSpeed = 150.0;    // movement functions will need to take float as parameter instead of integer like before
float leftSpeed;            // also they will need to take 2 parameters for 
float rightSpeed;

float error;
float previousError = 0;

unsigned long _currentTime;   // variables used to calculate delta time
unsigned long _lastTime;

float Kp = 20.0;
float Ki = 0.1;   // constants used to calculate PID, have to be adjusted and finetuned after testing
float Kd = 5.0;

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
  float outputPID = CalculatePID();

  leftSpeed = baseSpeed - outputPID; // adjusts speed of left and right motors according to PID output
  rightSpeed = baseSpeed + outputPID;

  // movement functions, called according to error like before 
  // however selection statement will need to be changed to account for the range of error values instead of 5 set line posititon values

  Serial.println();
}
