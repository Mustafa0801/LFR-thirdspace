//  ALL MOVEMENT FUNCTIONS, STOP AND REVERSE NO LONGER USED SO THEY AREN'T HERE

void Forward(int _leftSpeed, int _rightSpeed){
  analogWrite(leftMotor, _leftSpeed);
  analogWrite(rightMotor, _rightSpeed);

  digitalWrite(lf, HIGH);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  Serial.print(" | moving forward...");
}

void MoveRight(int _leftSpeed, int _rightSpeed){
  analogWrite(leftMotor, _leftSpeed);
  analogWrite(rightMotor, _rightSpeed);

  digitalWrite(lf, HIGH);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);
  digitalWrite(rb, HIGH);

  Serial.print(" | moving right...");
}

