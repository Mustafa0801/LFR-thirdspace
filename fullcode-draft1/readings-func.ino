//  THE FUNCTION TO READ INFRARED SENSORS AND CALCULATE LINE POSITION

// Each sensor is read one by one and at the same time it is checked if reading is zero
// If reading is zero, then the line is on the side of the sensor (left middle or right), so error of robot from line is stored
// NOTE: Since only one reading should be zero, only one of the if conditions will be true to decide error

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
   
  Serial.print("linePos: "+String(_error));
  return _error;

  // Each reading is printed in serial from left sensor to right sensor along with error e.g  1 1 1 0 1  linePos: 2
}
