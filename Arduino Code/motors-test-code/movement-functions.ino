void stop() {
  digitalWrite(lf, LOW);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);  
  digitalWrite(rb, LOW);

  Serial.println("stopped");
}

void forward(int _speedL, int _speedR) {
  analogWrite(lf, _speedL);
  analogWrite(rf, _speedR);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  Serial.println("forward");
}

void reverse(int _speedL, int _speedR) {
  digitalWrite(lf, LOW);
  digitalWrite(rf, LOW);

  analogWrite(lb, HIGH);
  analogWrite(rb, HIGH);

  Serial.println("reverse");
}

void right(int _speedL, int _speedR){
  analogWrite(lf, _speedL);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);
  analogWrite(rb, _speedR);

  Serial.println("right");
}

void rightTurn(int _speedL, int _speedR){
  digitalWrite(lf, LOW);
  analogWrite(rf, _speedR);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  Serial.println("right turn");
}

void left(int _speedL, int _speedR){
  digitalWrite(lf, LOW);
  analogWrite(rf, _speedR);

  analogWrite(lb, _speedL);
  digitalWrite(rb, LOW);

  Serial.println("left");
}

void leftTurn(int _speedL, int _speedR){
  analogWrite(lf, _speedL);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  Serial.println("left turn");
}


