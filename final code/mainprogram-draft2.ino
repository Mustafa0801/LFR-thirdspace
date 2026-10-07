// INCORPORATNG EVERYTHING INCLUDING PID, THIS WILL PROBABLY BE FINAL CODE (AFTER TESTING)

// pin numbers for motors and wheel servos

#define leftMotor 5
#define rightMotor 3
#define lf 2    // left forward servo
#define rf 7    // right forward servo
#define lb 4    // left back servo
#define rb 6    // right back servo

// pin numbers for sensor array

#define irL2 8   // left most
#define irL1 9  // left of middle
#define irM 10    // middle
#define irR1 11    // right of middle
#define irR2 12    // right most

float error;
float previousError = 0;    
float integral = 0;

float baseSpeed = 200.0;  
float leftSpeed;
float rightSpeed;

unsigned long currentTime;    // used to calculate delta time
unsigned long lastTime;

float Kp = 20.0;
float Ki = 0.5;    // constants used to calculate PID (still need to be adjusted) 
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

  lastTime = micros();
  Serial.begin(9600);
}

void loop() {
  error = ReadSensors();
  float outputPID = CalculatePID(error);

  Serial.println();

  leftSpeed = baseSpeed - outputPID;
  rightSpeed = baseSpeed + outputPID;  // speed is adjusted according to PID to allow robot to move smoothly and accurately

  // maximum and minimum thresholds for speed, since we can only analogWrite values between 0-255 inclusive
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

  Forward(leftSpeed, rightSpeed);  // the direction will be automatically changed by the varying left and right speeds

  Serial.println();   // going to next line
}
