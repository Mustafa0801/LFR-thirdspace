//  ALL MOVEMENT FUNCTIONS

void stop(){
  digitalWrite(lf, LOW);
  digitalWrite(lb, LOW);
  digitalWrite(rf, LOW);
  digitalWrite(rb, LOW);
  Serial.print(" | stopped ");
}

void forward(int _speedL, int _speedR){
  analogWrite(lf, _speedL);
  analogWrite(rf, _speedR);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  Serial.print(" | forward ");
}

void right(int _speedL, int _speedR){
  analogWrite(lf, _speedL);
  digitalWrite(lb, LOW);

  digitalWrite(rf, LOW);
  analogWrite(rb, _speedR);

  Serial.print(" | right ");
}

void rightTurn(int _speedL, int _speedR){
  digitalWrite(lf, LOW);
  digitalWrite(lb, LOW);

  analogWrite(rf, _speedR);
  digitalWrite(rb, LOW);

  Serial.print(" | right point turn ");
}

void left(int _speedL, int _speedR){
  digitalWrite(lf, LOW);
  analogWrite(lb, _speedL);

  analogWrite(rf, _speedR);
  digitalWrite(rb, LOW);

  Serial.print(" | left ");
}

void leftTurn(int _speedL, int _speedR){
  analogWrite(lf, _speedL);
  digitalWrite(lb, LOW);

  digitalWrite(rf, LOW);
  digitalWrite(rb, LOW);
  
  Serial.print(" | left point turn ");
}

