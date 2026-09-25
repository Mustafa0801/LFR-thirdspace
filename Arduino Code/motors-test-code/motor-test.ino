#define motor1 3 // left engine
#define motor2 5 // right engine
#define lf 2 // front-left wheel
#define lb 4 // back-left wheel
#define rf 7 // front-right wheel
#define rb 6 // back-right wheel

int leftSpeed = 150; // placeholder value for speeds 
int rightSpeed = 150;
int wait = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(lf, OUTPUT);
  pinMode(lb, OUTPUT);
  pinMode(rf, OUTPUT);
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
