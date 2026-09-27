// FUNCTIONS FOR CALCULATING DELTA TIME AND CALCULATING PID

float DeltaTime(){
  currentTime = micros();   // total time since start
  float _dt = (currentTime - lastTime) / 1000000.0;   // difference in time between each loop, converted to seconds
  lastTime = currentTime;   // last time updated for next loop
  Serial.print(" | dt: "+String(_dt));

  return _dt; 
}

