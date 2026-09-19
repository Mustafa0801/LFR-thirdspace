//  COMBINING PREVIOUS WRITTEN CODE INTO ONE FILE TO GET A DRAFT OF THE COLLECTIVE CODE

#define motorLeft 3   // declaring pin numbers for motor and servos
#define motorRight 5
#define lf 2    
#define lb 4
#define rf 7
#define rb 6

#define irL2 8   // declaring pin numbers for sensor array
#define irL1 9
#define irM 10
#define irR1 11
#define irR2 12


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
  
  
}
