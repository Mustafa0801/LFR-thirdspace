// CHANGED THE VARIABLES ACCORDING TO ACTUAL ROBOT, WILL NEED TO BE CHANGED FOR ALL OTHER CODES INVOLVING THE MOTORS
// INSTEAD OF 6 ONLY 4 PINS USED

#define lf 5 // left wheel forward
#define rf 3 // right wheel forward
#define lb 6 // left wheel backward
#define rb 4 // right wheel backward

int leftSpeed = 200; // placeholder value for speeds 
int rightSpeed = 200;
int wait = 1500;

void setup() {
  // put your setup code here, to run once:
  pinMode(lf, OUTPUT);
  pinMode(rf, OUTPUT);
  pinMode(lb, OUTPUT);
  pinMode(rb, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  // This is all a movement loop which tests each function one by one with short delays in between, 
  // i.e car moves in certain direction then stops, then moves

  delay(wait);
  forward(leftSpeed, rightSpeed);  // car moves forward after 1 second delay

  delay(wait);
  stop();   // 1.5 second later car stops

  delay(wait);
  right(leftSpeed, rightSpeed); // 1 second later car moves right

  delay(wait);
  stop(); 

  delay(wait);
  rightTurn(leftSpeed, rightSpeed); // car turns right

  delay(wait);
  stop();
  
  delay(wait);
  reverse(leftSpeed, rightSpeed);  //  car reverses

  delay(wait);
  stop(); // 1.5 second later car stops again

  delay(wait);
  left(leftSpeed, rightSpeed);  // car moves left

  delay(wait);
  stop();  

  delay(wait);
  leftTurn(leftSpeed, rightSpeed);  // car turns left

  delay(wait);
  stop();
  
}
