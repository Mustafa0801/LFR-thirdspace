#define ir_L1 8 // left most sensor
#define ir_L2 9
#define ir_M 10 // middle sensor
#define ir_R1 11
#define ir_R2 12 // right most sensor

//  total 5 sensors in array


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ir_L1, INPUT);
  pinMode(ir_L2, INPUT);
  pinMode(ir_M, INPUT);
  pinMode(ir_R1, INPUT);
  pinMode(ir_R2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ReadSensor(ir_L1);
  ReadSensor(ir_L2);
  ReadSensor(ir_M);
  ReadSensor(ir_R1);
  ReadSensor(ir_R2);
  Serial.println();
}
