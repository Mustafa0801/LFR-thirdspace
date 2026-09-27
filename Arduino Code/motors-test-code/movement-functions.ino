void stop() {
  digitalWrite(leftMotor, LOW);
  digitalWrite(rightMotor, LOW);
  
  digitalWrite(lf, LOW);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);  
  digitalWrite(rb, LOW);

  Serial.println("stopped");
}

void forward(int _speedL, int _speedR) {
  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);

  digitalWrite(lf, HIGH);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  Serial.println("forward");
}

void reverse(int _speedL, int _speedR) {
  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);
  
  digitalWrite(lf, LOW);
  digitalWrite(rf, LOW);

  digitalWrite(lb, HIGH);
  digitalWrite(rb, HIGH);

  Serial.println("reverse");
}

void right(int _speedL, int _speedR){
  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);
  
  digitalWrite(lf, HIGH);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);
  digitalWrite(rb, HIGH);

  Serial.println("right");
}

void rightTurn(int _speedL, int _speedR){
  analogWrite(leftMotor, _speedL);
  analogWrite(leftMotor, _speedR);
  
  digitalWrite(lf, LOW);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  Serial.println("right turn");
}

void left(int _speedL, int _speedR){
  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);
 
  digitalWrite(lf, LOW);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, HIGH);
  digitalWrite(rb, LOW);

  Serial.println("left");
}

void leftTurn(int _speedL, int _speedR){
  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);
  
  digitalWrite(lf, HIGH);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  Serial.println("left turn");
}


