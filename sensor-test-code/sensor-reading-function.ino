int ReadSensor(){
  int _linePos;
  int _sensorReading = digitalRead(ir_L2);
  Serial.print(String(_sensorReading)+" "); // read and print value of left most sensor
  
  if (_sensorReading == 0){   // if left most sensor gives value 0 then line is here
    _linePos = -4;
  }

  _sensorReading = digitalRead(ir_L1);
  Serial.print(String(_sensorReading)+" "); // read and print value of left middle sensor

  if (_sensorReading == 0){   // checking if line is here
    _linePos = -2;
  }

  _sensorReading = digitalRead(ir_M);
  Serial.print(String(_sensorReading)+" "); // read and print value of middle sensor

  if (_sensorReading == 0){   // checking if line is in middle
    _linePos = 0;
  }

  _sensorReading = digitalRead(ir_R1);
  Serial.print(String(_sensorReading)+" "); // read and print value of right middle sensor

  if (_sensorReading == 0){   // checking if line is here
    _linePos = 2;
  }

  _sensorReading = digitalRead(ir_R2);
  Serial.print(String(_sensorReading)+" "); // read and print of value of right most sensor

  if (_sensorReading == 0){   // checking if line is here
    _linePos = 4;
  }

  // the Serial will look something like this:  1 1 0 1 1 

  return _linePos;  // this line position will be returned and used to select direction of movement (note: only one of the if conditions will be true)
}


