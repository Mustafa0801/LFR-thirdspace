//  SIMILAR TO ORIGINAL SENSOR READING FUNCTION HOWEVER IT CALCULATES ERROR DIFFERENTLY

// NOTE: for now digital sensors being used but analog sensors could improve the smoothness of robot

float ReadSensors(){
  int readingL2 = digitalRead(irL2);    // seperate variable for reading for each sensor and value is printed same as before
  Serial.print(String(readingL2)+" ");

  int readingL1 = digitalRead(irL1);
  Serial.print(String(readingL1)+" ");

  int readingM = digitalRead(irM);
  Serial.print(String(readingM)+" ");

  int readingR1 = digitalRead(irR1);
  Serial.print(String(readingR1)+" ");

  int readingR2 = digitalRead(irR2);
  Serial.print(String(readingR2)+" ");

  // the algorithm calculates error using weighted position algorithm
  // e.g if robot is on the line then readings will be "1 1 0 1 1" , _robotPos=2.0 so _error=0

  float _robotPos = (readingL2*0 + readingL1*1 + readingM*2 + readingR1*3 + readingR2*4) / (readingL2 + readingL1 + readingM + readingR1 + readingR2);
  float _normalPos = 2.0;
  float _error = _robotPos - _normalPos;  // so if robot is left of line, its negative error, and if to the right of the line, its positive error
  Serial.print(" | Error is: "+String(_error));
  return _error;
}
