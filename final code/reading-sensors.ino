//  FUNCTION FOR READING SENSORS AND CALCULATING ERROR FROM LINE

float ReadSensors(){
  int _readingL2 = analogRead(irL2);
  int _readingL1 = analogRead(irL1);
  int _readingM1 = analogRead(irM1);    // reading all sensors, 
  int _readingM2 = analogRead(irM2);
  int _readingR1 = analogRead(irR1);  // ! inverts the values since the formula for calculating error assumes that a sensor detecting the line gives value 1
  int _readingR2 = analogRead(irR2);

  Serial.print("Readings: "+String(_readingL2)+" "+String(_readingL1)+" "+String(_readingM1)+" "+String(_readingM2)+" "+String(_readingR1)+" "+String(_readingR2)); // prints readings in a line e.g  0 1 0 0 0

  if ((_readingL2 + _readingL1 +_readingM1 + _readingM2 + _readingR1 + _readingR2) == 0){ // prevents dividing by zero in weight position formula
    return previousError;
  }

  // weighted position algorithm to calculate error

  float _currentPosition = float(_readingL2*0 + _readingL1*1 + _readingM1*2 + _readingM2*3 + _readingR1*4 + _readingR2*5) / (_readingL2 + _readingL1 + _readingM1 + _readingM2 + _readingR1 + _readingR2);
  float _normalPosition = 2.0;
  float _error = _normalPosition - _currentPosition;  // negative error means robot is left side of line (needs to move right), 
                                                      // positive error means robot is right side of line (needs to move left)

  // value of _currentPosition will be between 0 and 4.0 inclusive, hence value of _error will be between -2.0 and 2.0 inclusive
                              
  //Serial.print(" | error: "+String(_error));
  return _error;
}
