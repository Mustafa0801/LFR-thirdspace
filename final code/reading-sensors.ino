//  FUNCTION FOR READING SENSORS AND CALCULATING ERROR FROM LINE

float ReadSensors(){
  int _readingL2 = !digitalRead(irL2);
  int _readingL1 = !digitalRead(irL1);
  int _readingM = !digitalRead(irM);    // reading all sensors, 
  int _readingR1 = !digitalRead(irR1);  // ! inverts the values since the formula for calculating error assumes that a sensor detecting the line gives value 1
  int _readingR2 = !digitalRead(irR2);

  Serial.print("Readings: "+String(_readingL2)+" "+String(_readingL1)+" "+String(_readingM)+" "+String(_readingR1)+" "+String(_readingR2)); // prints readings in a line e.g  0 1 0 0 0

  if ((_readingL2 + _readingL1 +_readingM + _readingR1 + _readingR2) == 0){ // prevents dividing by zero in weight position formula
    return previousError;
  }

  // weighted position algorithm to calculate error

  float _currentPosition = (_readingL2*0 + _readingL1*1 + _readingM*2 + _readingR1*3 + _readingR2*4) / (_readingL2 + _readingL1 + _readingM + _readingR1 + _readingR2);
  float _normalPosition = 2.0;
  float _error = _normalPosition - _currentPosition;  // negative error means robot is right side of line (needs to move left), 
                                                      // positive error means robot is left side of line (needs to move right)

  // value of _currentPosition will be between 0 and 4.0 inclusive, hence value of _error will be between -2.0 and 2.0 inclusive
                              
  Serial.print(" | error: "+String(_error));
  return _error;
}
