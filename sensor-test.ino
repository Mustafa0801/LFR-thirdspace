byte irSensorPin = 9;
String sensorReading;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(irSensorPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorReading = digitalRead(irSensorPin);
  Serial.println(sensorReading);
}
