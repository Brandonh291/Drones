//Libraries
  //Radio reciever libraries
  //I2C communication library

//Functions
  //Auto-Stabilization
    //Reading IMU data
    //Calculating needed movement by comparing set direction and actual direection movement
    //Adjust motor PWM signal
  //Control Motors
    //Recieve Data from Remote Control
    //Parse data in Power and Direction
    //Power Data
      //Adjust pwm on all four motors equally?
    //Direction Data
      //Adjust pwm on all four to make slight movements in direction

//Side note i think i want an LED/ maybe OLED screen on the Remote controller (RC) to  display power and direction?

  

void setup() {
  // ok lets just do some brainstorming on what is going on in each section, functions,etc
  //When power is on, begin by waiting for the connection to form between the RC and the flight controller
    //need some way of knowing the drone is recieving data
    //perhaps parse out like the first few bytes as like "OK" and as long as it recieves that it can recieve the following values
    //something like OK.(000-100).(0-3)
    // so the code is (confimration of good data).(power %).(movement direction)
    //Movement setup: 0=Forward,1=Left,2=Backward,3=Right **keep it simple for now**

}

void loop() {
  // put your main code here, to run repeatedly:

}
