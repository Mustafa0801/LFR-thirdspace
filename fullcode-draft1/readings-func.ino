//  THE FUNCTION TO READ INFRARED SENSORS AND CALCULATE LINE POSITION

int ReadSensors(){
  int _error;
  int _reading = digitalRead(irL2);
  Serial.print(String(_reading)+" ");

  if (_reading == 0) _error = -4;

  _reading = digitalRead(irL1);
  Serial.print(String(_reading)+" ";)

  if (_reading == 0) _error = -2;

  _reading = digitalRead(irM);
  Serial.print(String(_reading)+" ");

  if (_reading == 0) _error = 0;

  _reading = digitalRead(irR1);
  Serial.print(String(_reading)+" ");

  if (_reading == 0) _error = 2;

  _reading = digitalRead(irR2);
  Serial.print(String(_reading)+" ");
  
  if (_reading == 0) _error = 4;

  return _error;
}