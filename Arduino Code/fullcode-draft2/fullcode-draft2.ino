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

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
