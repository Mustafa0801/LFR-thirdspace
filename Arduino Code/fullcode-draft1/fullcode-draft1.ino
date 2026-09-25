//  COMBINING PREVIOUS WRITTEN CODE INTO ONE FILE TO GET A DRAFT OF THE COLLECTIVE CODE

#define motorLeft 3   // declaring pin numbers for motor and servos
#define motorRight 5
#define lf 2    
#define lb 4
#define rf 7
#define rb 6

#define irL2 12  // declaring pin numbers for sensor array
#define irL1 11
#define irM 10
#define irR1 9
#define irR2 8

int leftSpeed = 100;  // placeholder values for speeds
int rightSpeed = 100;
int linePos;

void setup() {
  pinMode(motorLeft, OUTPUT);
  pinMode(motorRight, INPUT);
  pinMode(lf, OUTPUT);
  pinMode(lb, OUTPUT);    
  pinMode(rf, OUTPUT);
  pinMode(rb, OUTPUT);

  pinMode(irL2, INPUT);
  pinMode(irL1, INPUT);
  pinMode(irM, INPUT);
  pinMode(irR1, INPUT);
  pinMode(irR2, INPUT);

  Serial.begin(9600);
}

void loop() {
  linePos = ReadSensors();  // reads all sensors, prints in serial, and stores line position

  switch (linePos){     // checks line position to decide movement of robot
    case -4:            
      leftTurn(leftSpeed, rightSpeed);  // if line is far left then robot needs to turn sharply left
      break;
    case -2:
      left(leftSpeed, rightSpeed);      // line is slightly left so robot needs to move left slightly
      break;
    case 0:
      forward(leftSpeed, rightSpeed);   // line is infront so robot needs to move forward
      break;
    case 2:
      right(leftSpeed, rightSpeed);     // line slightly right, robot needs to move slightly right
      break;
    case 4:
      rightTurn(leftSpeed, rightSpeed); // line far right, robot needs to turn sharply right
      break;
  }

  Serial.println();   // goes to next line in serial
}
