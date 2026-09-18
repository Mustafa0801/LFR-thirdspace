//  TEST/IDEA FOR HOW SPEED COULD AUTO ADJUST (FOR SHARP TURNS AND STUFF)

//  The code involves checking if a sensor has remained 0 consecutively, 
//  if this sensor is one of the left or right ones then that means a sharp turn is there so robot should slow down to allow it to follow the line properly
//  otherwise if it is the middle one we can deduce that it is following a straight line so it can speed up
// number of consecutive readings would need to be adjusted according to tests

int speed = 150;  // normal speed of car
int linePos;

int countL2 = 0;
int countL1 = 0;
int countM = 0;  // counts how many times each sensor has had value 0 consecutively
int countR1 = 0;
int countR2 = 0;
int consecutive = 2;  // this variable stores the number of consecutive times reading should be same for the robot to change speed (stored in variable to easily change later after tests) 

void setup() {
  // pin modes of sensors and motors here
  Serial.begin(9600);
}

void loop() {
  // ReadSensors function here which will return value for linePos
  linePos = 2*(random(-2,2));   // PLACEHOLDER: for now using random numbers for linePos
  Serial.print(String(linePos)+"  ");

  switch (linePos){
    case -4:
      // turn left on point function 
      countL2 = countL2 + 1;  // increments counter for left most sensor
      countR2 = countR1 = countM = countL1 = 0;   // sets other counters to zero (since this means the other sensors havent had a consecutive same value)
      break;
    case -2:
      // move left function here
      countL1 = countL1 + 1;
      countR2 = countR1 = countM = countL2 = 0;
      break;
    case 0:
      // move forward function here
      countM = countM + 1;
      countR2 = countR1 = countL1 = countL2 = 0;
      break;
    case 2:
      // move right function here
      countR1 = countR1 + 1;
      countR2 = countM = countL1 = countL2 = 0;
      break;
    case 4:
      // turn right on point function here
      countR2 = countR2 + 1;
      countR1 = countM = countL1 = countL2 = 0;
      break;
  }

  if (countL2 == consecutive){
    speed = speed*0.75;  // decreases speed by 25% (maybe add minimum speed for robot, will need testing)
    countL2 = 0; // resets counter
    Serial.print("speed changed to: "+String(speed));
  } 
  else if (countL1 == consecutive){
    speed = speed*0.9;  // decreases speed by 10%
    countL1 = 0;
    Serial.print("speed changed to: "+String(speed));
  }
  else if (countM == consecutive){
    speed = 150;  // resets speed to normal if robot is following a long straight line 
    countM = 0; 
    Serial.print("speed reset to: "+String(speed));
  }
  else if (countR1 == consecutive){
    speed = speed*0.9;
    countR1 = 0;
    Serial.print("speed changed to: "+String(speed));
  }
  else if (countR2 == consecutive){
    speed = speed*0.75;
    countR2 = 0;
    Serial.print("speed changed to: "+String(speed));
  }

  Serial.println(); // goes to next line
}
