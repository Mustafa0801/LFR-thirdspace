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

void forward(int _speed){
  analogWrite(motorLeft, _speed);
  analogWrite(motorRight, _speed);
  digitalWrite(lf, HIGH);
  digitalWrite(lb, LOW);
  digitalWrite(rf, HIGH);
  digitalWrite(rb, LOW);
  Serial.print(" | forward ");
}

void right(int _speed){
  analogWrite(motorLeft, _speed);
  digitalWrite(motorRight, LOW);
  digitalWrite(lf, HIGH);
  digitalWrite(lb, LOW);
  digitalWrite(rf, LOW);
  digitalWrite(rb, HIGH);
  Serial.print(" | right ");
}

void rightTurn(int _speed){
  analogWrite(motorLeft, _speed);
  analogWrite(motorRight, _speed);
  digitalWrite(lf, HIGH);
  digitalWrite(lb, LOW);
  digitalWrite(rf, LOW);
  digitalWrite(rb, HIGH);
  Serial.print(" | right point turn ");
}

void left(int _speed){
  analogWrite(motorLeft, _speed);
  digitalWrite(motorRight, LOW);
  digitalWrite(lf, LOW);
  digitalWrite(lb, HIGH);
  digitalWrite(rf, HIGH);
  digitalWrite(rb, LOW);
  Serial.print(" | left ");
}

void leftTurn(int _speed){
  analogWrite(motorLeft, _speed);
  analogWrite(motorRight, _speed);
  digitalWrite(lf, LOW);
  digitalWrite(lb, HIGH);
  digitalWrite(rf, HIGH);
  digitalWrite(rb, LOW);
  Serial.print(" | left point turn ");
}



