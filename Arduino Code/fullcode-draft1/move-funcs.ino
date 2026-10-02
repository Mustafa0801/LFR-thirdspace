//  ALL MOVEMENT FUNCTIONS

void stop() {
  digitalWrite(leftMotor, LOW);
  digitalWrite(rightMotor, LOW);
  
  digitalWrite(lf, LOW);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);  
  digitalWrite(rb, LOW);

  Serial.println(" | stopped");
}


void forward(int _speedL, int _speedR) {
  digitalWrite(lf, HIGH);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);

  Serial.println(" | forward");
}

void right(int _speedL, int _speedR){
  digitalWrite(lf, HIGH);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);
  digitalWrite(rb, HIGH);

  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);

  Serial.print(" | right ");
}

void rightTurn(int _speedL, int _speedR){  
  digitalWrite(lf, LOW);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);

  Serial.print(" | right point turn ");
}

void left(int _speedL, int _speedR){
  digitalWrite(lf, LOW);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, HIGH);
  digitalWrite(rb, LOW);

  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);

  Serial.print(" | left ");
}

void leftTurn(int _speedL, int _speedR){
  digitalWrite(lf, HIGH);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);
  
  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);

  Serial.print(" | left point turn ");
}

