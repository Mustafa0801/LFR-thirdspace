//  POSSIBLE CODE FOR BLUETOOTH CONTROL OF LFR

//  function to recieve data from bluetooth: 
  int bluetooth(){
    int _data;
    if (Serial.available()){
      _data = Serial.read();
      Serial.print(" BT Data: "+String(_data));
    }
    else{
      _data = 0;
      Serial.print(" BT Data: "+String(_data));
    }
    return _data;
  }

int data;
int moveCom = 80;     // the value recieved from bluetooth when move command is given
int reverseCom = 70;  // the value recieved from bluetooth when reverse command is given
int stopCom = 60;     // the value recieved from bluetooth when stop command is given
                      // both of these values are placeholder values, actual values will decided by the data recieved when tested with bluetooth

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  data = bluetooth();
  if (data == moveCom){
    // all the previous code for moving the robot according to line position will be written here
    // that code could be written as a function here to make it easier to understand e.g 'FollowLine()'
    // for now we will print a message in the serial
    Serial.print(" | Robot is moving");
  }
  else if (data == reverseCom){
    // allowing the robot to reverse is optional but if it were to be a command then this is how it would be achieved

    // using the left or right turn functions to fully turn around the robot
    // this would need to be tuned by testing to have certain speed and then have a set delay after which we know that the robot has turned around
    // following the U turn the robot will begin moving (now in opposite direction of its original movement)
    // so the function e.g 'FollowLine()' can be called here
    // IMPORTANT NOTE: there might need to be some form of check to make sure the robot does not continously keep reversing as data is continously recieved from bluetooth
    Serial.print(" | Robot is reversing");
  }
  else if (data == stopCom){
    // movement function that stops the robot
    Serial.print(" | Robot has stopped");
  }
  Serial.println();  // goes to next line
}
