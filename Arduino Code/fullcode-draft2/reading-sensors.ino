//  FUNCTION FOR READING SENSORS AND CALCULATING ERROR FROM LINE

float ReadSensors(){
  int _readingL2 = digitalRead(irL2);
  int _readingL1 = digitalRead(irL1);
  int _readingM = digitalRead(irM);
  int _readingR1 = digitalRead(irR1);
  int _readingR2 = digitalRead(irR2);

  Serial.print("Readings: "+String(_readingL2)+" "+String(_readingL1)+" "+String(_readingM)+" "+String(_readingR1)+" "+String(_readingR2)); // prints readings in a line e.g 1 0 1 1 1

  
}