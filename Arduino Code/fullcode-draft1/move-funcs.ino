//  ALL MOVEMENT FUNCTIONS

void stop(){
  digitalWrite(motorLeft, HIGH);
  digitalWrite(motorRight, HIGH);
  digitalWrite(lf, LOW);
  digitalWrite(lb, LOW);
  digitalWrite(rf, LOW);
  digitalWrite(rb, LOW);
  Serial.print(" | stopped ");
}

void forward(int _speedL, int _speedR){
  analogWrite(motorLeft, _speedL);
  analogWrite(motorRight, _speedR);
  digitalWrite(lf, HIGH);
  digitalWrite(lb, LOW);
  digitalWrite(rf, HIGH);
  digitalWrite(rb, LOW);
  Serial.print(" | forward ");
}

void right(int _speedL, int _speedR){
  analogWrite(motorLeft, _speedL);
  digitalWrite(motorRight, LOW);
  digitalWrite(lf, HIGH);
  digitalWrite(lb, LOW);
  digitalWrite(rf, LOW);
  digitalWrite(rb, HIGH);
  Serial.print(" | right ");
}

void rightTurn(int _speedL, int _speedR){
  analogWrite(motorLeft, _speedL);
  analogWrite(motorRight, _speedR);
  digitalWrite(lf, HIGH);
  digitalWrite(lb, LOW);
  digitalWrite(rf, LOW);
  digitalWrite(rb, HIGH);
  Serial.print(" | right point turn ");
}

void left(int _speedL, int _speedR){
  analogWrite(motorLeft, _speedL);
  digitalWrite(motorRight, LOW);
  digitalWrite(lf, LOW);
  digitalWrite(lb, HIGH);
  digitalWrite(rf, HIGH);
  digitalWrite(rb, LOW);
  Serial.print(" | left ");
}

void leftTurn(int _speedL, int _speedR){
  analogWrite(motorLeft, _speedL);
  analogWrite(motorRight, _speedR);
  digitalWrite(lf, LOW);
  digitalWrite(lb, HIGH);
  digitalWrite(rf, HIGH);
  digitalWrite(rb, LOW);
  Serial.print(" | left point turn ");
}

