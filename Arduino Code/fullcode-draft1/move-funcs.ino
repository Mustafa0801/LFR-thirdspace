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

void rightRotate(int _speedL, int _speedR){   // robot rotates right (clockwise) about a point
  digitalWrite(lf, HIGH);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);
  digitalWrite(rb, HIGH);

  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);

  Serial.print(" | right ");
}

void rightTurn(int _speedL, int _speedR){     // robot turns right while moving
  digitalWrite(lf, HIGH);
  digitalWrite(rf, LOW);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);

  analogWrite(leftMotor, _speedL);
  digitalWrite(rightMotor, LOW);

  Serial.print(" | right point turn ");
}

void leftRotate(int _speedL, int _speedR){    // robot rotates left (anti clockwise) about a point
  digitalWrite(lf, LOW);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, HIGH);
  digitalWrite(rb, LOW);

  analogWrite(leftMotor, _speedL);
  analogWrite(rightMotor, _speedR);

  Serial.print(" | left ");
}

void leftTurn(int _speedL, int _speedR){      // robot turns left while moving
  digitalWrite(lf, LOW);
  digitalWrite(rf, HIGH);

  digitalWrite(lb, LOW);
  digitalWrite(rb, LOW);
  
  digitalWrite(leftMotor, LOW);
  analogWrite(rightMotor, _speedR);

  Serial.print(" | left point turn ");
}

