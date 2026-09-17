void ReadSensor(int _sensorPin){
  int _sensorReading = digitalRead(_sensorPin);
  Serial.print(String(_sensorReading)+" ");
}