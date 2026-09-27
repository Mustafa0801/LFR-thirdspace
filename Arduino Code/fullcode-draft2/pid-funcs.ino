// FUNCTIONS FOR CALCULATING DELTA TIME AND CALCULATING PID

float CalculateDeltaTime(){
  currentTime = micros();   // total time since start
  float _dt = (currentTime - lastTime) / 1000000.0;   // difference in time between each loop, converted to seconds
  lastTime = currentTime;   // last time updated for next loop
  Serial.print(" | dt: "+String(_dt));

  return _dt; 
}

float CalculatePID(float _error){
  float deltaTime = CalculateDeltaTime();
  float _integral = _integral + (_error*deltaTime);   // sums errors over time
  float _derivative = (_error - previousError) / deltaTime;   // rate of change of errors

  previousError = _error;   // previous error updated for next loop

  float _output = (Kp * _error) + (Ki * _integral) + (Kd * _derivative); // calculating PID output

  Serial.print(" | PID output: "+String(_output));
  return _output;
}
