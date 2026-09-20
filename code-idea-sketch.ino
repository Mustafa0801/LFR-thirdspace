// !! SPLIT THINGS INTO DIFFERENT TABS FOR ORGANISING !!


// create variables for pin numbers of components (IR sensors and motors) and store said pin numbers in them

// procedures for moving the robot in different directions, i.e procedure for forward, left, right, back and stopping (seperate tab)
// function that reads all sensors and calculates position of black line, also prints readings in serial (seperate tab)
    // we will be using the variables that have IR readings stored in them and checking if the reading is LOW
    // LOW reading means there is black line so then the robot should move in that direction, hence following the line

void setup() {
  // setting pin modes
  // Serial.begin, for debugging purposes i.e seeing the IR readings and the movement procedure that is called
}

void loop() {
  // call function to read sensors which will return line position
  // 'switch case' control structure, that checks the line position and calls the relevant procedure for moving in that direction
}

// OTHER IDEAS----> 1. Maybe adding bluetooth control that allows us to choose when the robot moves and when it stops, 
                //     maybe also control its direction i.e moving backwards along the line it just followed (for this either more sensors or full U turn)
                //  2. Have control over speed of motor?
                //  3. have auto speed adjustment for sharp turns maybe
                //  4. PID algorithm *very important*
                    
