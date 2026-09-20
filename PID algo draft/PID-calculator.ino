//  FUNCTION TO FIRST CALCULATE DELTA TIME

float Calculate_dt(){
  _currentTime = millis();
  float _dt = (_currentTime - _lastTime) / 1000.0;
  _lastTime = _currentTime;
  return _dt;
}

//  FUNCTION FOR CALCULATING PID

float CalculatePID(float _error){
  float dt = Calculate_dt();
  float _integral = _integral + _error*dt;
  float _derivative = (_error - previousError) / dt;
  
  previousError = _error;
 
}