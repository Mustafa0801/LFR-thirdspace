void stop() {
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, HIGH);

  digitalWrite(lf, LOW);
  digitalWrite(rf, LOW);  // Sets all motors to LOW, making car stop

  digitalWrite(lb, LOW);  
  digitalWrite(rb, LOW);

  Serial.println("stopped");
}

void forward(int _speedL, int _speedR) {
  analogWrite(motor1, _speedL);
  analogWrite(motor2, _speedR);

  digitalWrite(lf, HIGH);
  digitalWrite(rf, HIGH); // sets only forward motors to HIGH so that car moves forward

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  Serial.println("forward");
}

void reverse(int _speedL, int _speedR) {
  analogWrite(motor1, _speedL);
  analogWrite(motor2, _speedR);

  digitalWrite(lf, LOW);
  digitalWrite(rf, LOW);  // sets only back motors to HIGH so that car moves backward

  digitalWrite(lb, HIGH);
  digitalWrite(rb, HIGH);

  Serial.println("reverse");
}

void right(int _speedL, int _speedR){
  analogWrite(motor1, _speedL);
  digitalWrite(motor2, LOW);

  digitalWrite(lf,HIGH);
  digitalWrite(rf, LOW);    // car moves right

  digitalWrite(lb, LOW);
  digitalWrite(rb, HIGH);

  Serial.println("right");
}

void rightTurn(int _speedL, int _speedR){
  analogWrite(motor1, _speedL);
  analogWrite(motor2, _speedR);

  digitalWrite(lf, HIGH);
  digitalWrite(rf, LOW);    // car turns right on a point

  digitalWrite(lb, LOW);
  digitalWrite(rb, HIGH);

  Serial.println("right turn");
}

void left(int _speedL, int _speedR){
  analogWrite(motor1, _speedL);
  digitalWrite(motor2, LOW);

  digitalWrite(lf, LOW);
  digitalWrite(rf, HIGH);   // car moves left

  digitalWrite(lb, HIGH);
  digitalWrite(rb, LOW);

  Serial.println("left");
}

void leftTurn(int _speedL, int _speedR){
  analogWrite(motor1, _speedL);
  analogWrite(motor2, _speedR);

  digitalWrite(lf, LOW);
  digitalWrite(rf, HIGH);   // car turns left on a point

  digitalWrite(lb, HIGH);
  digitalWrite(rb, LOW);

  Serial.println("left turn");
}


