//  ALL MOVEMENT FUNCTIONS, STOP AND REVERSE NO LONGER USED SO THEY AREN'T HERE

void Forward(int _leftSpeed, int _rightSpeed){

  digitalWrite(lf, HIGH);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  analogWrite(leftMotor, _leftSpeed);
  analogWrite(rightMotor, _rightSpeed);

  Serial.print(" | moving forward...");
}

void TurnRight(int _leftSpeed, int _rightSpeed){
  digitalWrite(lf, HIGH);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  analogWrite(leftMotor, _leftSpeed);
  analogWrite(rightMotor, _rightSpeed);

  Serial.print(" | turning right...");
}

void TurnLeft(int _leftSpeed, int _rightSpeed){
  digitalWrite(lf, LOW);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  analogWrite(leftMotor, _leftSpeed);
  analogWrite(rightMotor, _rightSpeed);

  Serial.print(" | turning left...");
}
