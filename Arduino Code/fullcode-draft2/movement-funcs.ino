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

void MoveRight(int _leftSpeed, int _rightSpeed){    // keeping right speed as parameter (even though it isnt used) just for uniformity 
  analogWrite(leftMotor, _leftSpeed);
  digitalWrite(rightMotor, LOW);

  digitalWrite(lf, HIGH);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);
  digitalWrite(rb, HIGH);

  Serial.print(" | moving right...");
}

void TurnRight(int _leftSpeed, int _rightSpeed){
  analogWrite(leftMotor, _leftSpeed);
  analogWrite(rightMotor, _rightSpeed);

  digitalWrite(lf, HIGH);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);
  digitalWrite(rb, HIGH);

  Serial.print(" | turning right...");
}

void MoveLeft(int _leftSpeed, int _rightSpeed){
  analogWrite(leftMotor, _leftSpeed);
  digitalWrite(rightMotor, LOW);

  digitalWrite(lf, LOW);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, HIGH);
  digitalWrite(rb, LOW);

  Serial.print(" | moving left...");
}

void TurnLeft(int _leftSpeed, int _rightSpeed){
  analogWrite(leftMotor, _leftSpeed);
  analogWrite(rightMotor, _rightSpeed);

  digitalWrite(lf, LOW);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, HIGH);
  digitalWrite(rb, LOW);

  Serial.print(" | turning left...");
}
