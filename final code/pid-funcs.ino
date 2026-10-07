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
  float _output;

  if (deltaTime <= 0){  // to prevent dividing by zero
    _output = 0;
  }
  else{
    integral = integral + (_error * deltaTime);   // sums errors over time
    float _derivative = (_error - previousError) / deltaTime;   // rate of change of errors

    previousError = _error;   // previous error updated for next loop

    _output = (Kp * _error) + (Ki * integral) + (Kd * _derivative); // calculating PID output

    // limits output to prevent integral windup, NOTE: speeds can still exceed max and min values with this so they also need to be limited seperately
    if (_output > 255.0){
      _output = 255.0;
      integral = integral - (_error * deltaTime);  // prevents integral from further accumulating
    }
    else if (_output < -255.0){
      _output = -255.0;
      integral = integral - (_error * deltaTime);  // prevents integral from further accumulating
    }
  }
  Serial.print(" | PID output: "+String(_output));
  return _output;
}
