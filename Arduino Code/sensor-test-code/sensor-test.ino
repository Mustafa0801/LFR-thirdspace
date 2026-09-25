#define ir_L2 12  // left most sensor
#define ir_L1 11  // left middle sensor
#define ir_M 10  // middle sensor
#define ir_R1 9 // right middle sensor
#define ir_R2 8 // right most sensor

//  total 5 sensors in array


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ir_L2, INPUT);
  pinMode(ir_L1, INPUT);
  pinMode(ir_M, INPUT);
  pinMode(ir_R1, INPUT);
  pinMode(ir_R2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int linePos = ReadSensor(); // the readings will be printed and line position will be stored in linePos
  float reading = analogRead(A1);
  Serial.print(" | linePos: "+String(linePos));   // example of one Serial line:  0 1 1 1 1  | linePos: -4 
  Serial.println(); // goes to next line in Serial

  // linePos will be used as condition to select correct movement of robot such that it follows the line
}
