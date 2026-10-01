void stop() {
  digitalWrite(lf, LOW);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);  
  digitalWrite(rb, LOW);

  digitalWrite(leftMotor, LOW);
  digitalWrite(rightMotor, LOW);

  Serial.println("stopped");
}

void forward(int _speedL, int _speedR) {
  digitalWrite(lf, HIGH);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);

  Serial.println("forward");
}

void reverse(int _speedL, int _speedR) {
  digitalWrite(lf, LOW);
  digitalWrite(rf, LOW);

  digitalWrite(lb, HIGH);
  digitalWrite(rb, HIGH);

  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);

  Serial.println("reverse");
}

void right(int _speedL, int _speedR){ 
  digitalWrite(lf, HIGH);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);
  digitalWrite(rb, HIGH);

  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);

  Serial.println("right");
}

void rightTurn(int _speedL, int _speedR){
  digitalWrite(lf, LOW);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);
  

  Serial.println("right turn");
}

void left(int _speedL, int _speedR){ 
  digitalWrite(lf, LOW);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, HIGH);
  digitalWrite(rb, LOW);

  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);

  Serial.println("left");
}

void leftTurn(int _speedL, int _speedR){
  digitalWrite(lf, HIGH);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);

  Serial.println("left turn");
}


