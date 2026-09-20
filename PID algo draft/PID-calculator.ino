//  FUNCTION TO FIRST CALCULATE DELTA TIME

float Calculate_dt(){
  _currentTime = millis();
  float _dt = (_currentTime - _lastTime) / 1000.0;
  _lastTime = _currentTime;
  Serial.print("dt is: "+String(_dt));
  if (_dt == 0){
    _dt = 0.1;    // sets a value for delta time if it is calculated as zero, since the first time loop runs dt will be zero
  }
  return _dt;
}

//  FUNCTION FOR CALCULATING PID

float CalculatePID(){
  float dt = Calculate_dt();
  float _integral = _integral + error*dt;
  float _derivative = (error - previousError) / dt;
  
  previousError = error;
 
  float _output = (Kp * error) + (Ki * _integral) + (Kd * _derivative);
  Serial.print(" | PID output is: "+String(_output));
  return _output;
}
