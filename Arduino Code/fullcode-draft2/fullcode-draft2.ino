// INCORPORATNG EVERYTHING INCLUDING PID, THIS WILL PROBABLY BE FINAL CODE (AFTER TESTING)

// pin numbers for motors and wheel servos

#define leftMotor 3
#define rightMotor 5
#define lf 2
#define rf 7      
#define lb 4
#define rb 6

// pin numbers for sensor array

#define irL2 12   // left most
#define irL1 11
#define irM 10    // middle
#define irR1 9
#define irR2 8    // right most

float error;
float previousError = 0;    

float baseSpeed = 100.0;  
float leftSpeed;
float rightSpeed;

unsigned long currentTime;    // used to calculate delta time
unsigned long lastTime;

float Kp = 20.0;
float Ki = 0.05;    // constants used to calculate PID
float Kd = 5.0;

void setup() {
  pinMode(leftMotor, OUTPUT);
  pinMode(rightMotor, OUTPUT);
  pinMode(lf, OUTPUT);
  pinMode(rf, OUTPUT);
  pinMode(lb, OUTPUT);
  pinMode(rb, OUTPUT);

  pinMode(irL2, INPUT);
  pinMode(irL1, INPUT);
  pinMode(irM, INPUT);
  pinMode(irR1, INPUT);
  pinMode(irR2, INPUT);

  Serial.begin(9600);
}

void loop() {
  error = ReadSensors();
  float output = CalculatePID(error);

  leftSpeed = baseSpeed - output;
  rightSpeed = baseSpeed + output;  // speed is adjusted to allow robot to move smoothly and accurately

  // maximum and minimum thresholds for speed
  if (leftSpeed > 255.0){
    leftSpeed = 255.0;
  }
  else if (leftSpeed < 0){
    leftSpeed = 0;
  }
  if (rightSpeed > 255.0){
    rightSpeed = 255.0;
  }
  else if (rightSpeed < 0){
    rightSpeed = 0;
  }

  leftSpeed = round(leftSpeed);     // converting speeds from float to int since the movement functions need integer value for speed
  rightSpeed = round(rightSpeed);
  Serial.print(" | left speed: "+String(leftSpeed)+" right speed: "+String(rightSpeed));
}
