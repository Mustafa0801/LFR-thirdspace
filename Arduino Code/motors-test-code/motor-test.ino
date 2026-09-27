// REVERTED EVERYTHING TO ORIGINAL BECAUSE I WAS DUMB

#define leftMotor 5 
#define rightMotor 3
#define lf 2 // left wheel forward
#define rf 7 // right wheel forward
#define lb 4 // left wheel backward
#define rb 6 // right wheel backward

int leftSpeed = 150; // placeholder value for speeds 
int rightSpeed = 150;
int wait = 1500;

void setup() {
  pinMode(leftMotor, OUTPUT);
  pinMode(rightMotor, OUTPUT);
  pinMode(lf, OUTPUT);
  pinMode(rf, OUTPUT);
  pinMode(lb, OUTPUT);
  pinMode(rb, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  // This is all a movement loop which tests each function one by one with short delays in between, 
  // i.e car moves in certain direction then stops, then moves

  //delay(wait);
  //forward(leftSpeed, rightSpeed);  // car moves forward after 1 second delay

  //delay(wait);
  //stop();   // 1.5 second later car stops

  //delay(wait);
  //right(leftSpeed, rightSpeed); // 1 second later car moves right

  //delay(wait);
  //stop(); 

  //delay(wait);
  //rightTurn(leftSpeed, rightSpeed); // car turns right

  //delay(wait);
  // stop();
  
  //delay(wait);
  //reverse(leftSpeed, rightSpeed);  //  car reverses

  //delay(wait);
  //stop(); // 1.5 second later car stops again

  //delay(wait);
  //left(leftSpeed, rightSpeed);  // car moves left

  //delay(wait);
  //stop();  

  //delay(wait);
  //leftTurn(leftSpeed, rightSpeed);  // car turns left

  digitalWrite(leftMotor, HIGH);
  digitalWrite(lf, HIGH);

  delay(wait);
  stop();
  
}
