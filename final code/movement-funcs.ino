//  ALL MOVEMENT FUNCTIONS, STOP AND REVERSE NO LONGER USED SO THEY AREN'T HERE

void Forward(int _leftSpeed, int _rightSpeed){
  if (leftReverse == true){
    digitalWrite(lf, LOW);
    digitalWrite(lb, HIGH);
  }
  else{
    digitalWrite(lf, HIGH);
    digitalWrite(lb, LOW);
  }

  if (rightReverse == true){
    digitalWrite(rf, LOW);
    digitalWrite(rb, HIGH);
  }
  else{
    digitalWrite(rf, HIGH);
    digitalWrite(rb, LOW);
  }

  analogWrite(leftMotor, _leftSpeed);
  analogWrite(rightMotor, _rightSpeed);
}

void TurnRight(int _leftSpeed, int _rightSpeed){
  digitalWrite(lf, HIGH);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  analogWrite(leftMotor, _leftSpeed);
  analogWrite(rightMotor, _rightSpeed);
}

void TurnLeft(int _leftSpeed, int _rightSpeed){
  digitalWrite(lf, LOW);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  analogWrite(leftMotor, _leftSpeed);
  analogWrite(rightMotor, _rightSpeed);
}
