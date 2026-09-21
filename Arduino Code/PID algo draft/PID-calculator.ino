//  FUNCTION TO FIRST CALCULATE DELTA TIME

float Calculate_dt(){
  _currentTime = millis();     // total time that has passed since start
  float _dt = (_currentTime - _lastTime) / 1000.0;    // total time minus time the previous total time before this iteration, and then divided by 1000 to convert to seconds
  _lastTime = _currentTime;    // previous total time updated for next iteration
  Serial.print("dt is: "+String(_dt));
  if (_dt == 0){
    _dt = 0.1;    // sets a value for delta time if it is calculated as zero, since the first time loop runs dt will be zero
  }
  return _dt;
}

//  FUNCTION FOR CALCULATING PID

float CalculatePID(){
  float dt = Calculate_dt();
  float _integral = _integral + error*dt;   // sums errors over time
  float _derivative = (error - previousError) / dt;   // rate of change of error
  
  previousError = error;  // previousError updated for next iteration
 
  float _output = (Kp * error) + (Ki * _integral) + (Kd * _derivative);   // PID output calculated, variables Kp, Ki, Kd will be finetuned after testing
  Serial.print(" | PID output is: "+String(_output));
  return _output;
}
