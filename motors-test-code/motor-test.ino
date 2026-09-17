#define motor1 3 // left engine
#define motor2 5 // right engine
#define lf 2 // front-left wheel
#define lb 4 // back-left wheel
#define rf 7 // front-right wheel
#define rb 6 // back-right wheel

int speed = 150; // placeholder value for speed (maybe make it controllable instead of hard coded later on)

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

  delay(1000);
  forward(speed);  // car moves forward after 1 second delay

  delay(1500);
  stop();   // 1.5 second later car stops

  delay(1000);
  right(speed); // 1 second later car moves right

  delay(1000);
  stop(); 

  delay(1000);
  rightTurn(speed); // car turns right

  delay(1000);
  stop();
  
  delay(1000);
  reverse(speed);  //  car reverses

  delay(1500);
  stop(); // 1.5 second later car stops again

  delay(1000);
  left(speed);  // car moves left

  delay(1000);
  stop();  

  delay(1000);
  leftTurn(speed);  // car turns left

  delay(1000);
  stop();
  
}
