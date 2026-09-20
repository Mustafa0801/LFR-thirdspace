//   THIS IS FIRST SKETCH FOR PID ALGORITHM
//   IT IMPROVES UPON PREVIOUS SENSOR READING ALGORITHMS AND THE SPEED ADJUSTMENT ALGORITHM
//   THIS IS NOT FINAL, BEING MADE WITHOUT THE ACTUAL ROBOT COMPONENTS CURRENTLY
//   AFTER TESTING WITH BUILT ROBOT THIS CAN BE IMPROVED AND FINALIZED

#define irL2 8
#define irL1 9
#define irM 10    // pins of sensors, same as before
#define irR1 11
#define irR2 12

int baseSpeed = 150;
int leftSpeed;
int rightSpeed;

float error;
float previousError = 0;
unsigned long _currentTime;   // variables used to calculate delta time
unsigned long _lastTime;

void setup() {
  pinMode(irL2, INPUT);
  pinMode(irL1, INPUT);
  pinMode(irM, INPUT);
  pinMode(irR1, INPUT);
  pinMode(irR2, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

}
