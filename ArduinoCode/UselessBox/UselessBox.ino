// Servo library
#include <Servo.h> 

// Input pin 
int inputPin = 2;

int originalPosition = 20; // servos starting position
Servo opening; // servo used for the opener
Servo arm; // servo used for the arm switch


void setup() {
  
Serial.begin(9600);
// put your setup code here, to run once:
pinMode(inputPin,INPUT); // read the toggle switch status

// assigning the servos
opening.attach(9);
arm.attach(11);

// initialise servos to beginning position 
opening.write(originalPosition);
arm.write(originalPosition);

}

void loop() {
  
// put your main code here, to run repeatedly:
int value = digitalRead(inputPin); // reading the value from the toggle switch 


if (value == 1) // if the toogle switch is pressed
{
  int randomBehaviour = random(0,6); // generate a random number between 0 and 5 
  Behave(randomBehaviour); // use the above random to trigger a behaviour
}
  

Serial.print(value); // print the toggle switch value
  

}


// Function which takes a number as a parameter and execute the corresponding behaviour.
void Behave(int b)
{
  
  switch(b){ // switch function parameter

//-----------------Bheaviour01---------------------------------------
  case 0:
  opening.write(70);
  delay(3000);
  arm.write(110);
  delay(500);
  arm.write(originalPosition);
  delay(3000);
  opening.write(originalPosition);

  break;

//-----------------Bheaviour02---------------------------------------
  case 1:
  opening.write(50);
  delay(2000);
  opening.write(60);
  delay(2000);
  opening.write(70);
  delay(1000);
  arm.write(110);
  delay(500);
  arm.write(70);
  delay(2000);
  arm.write(80);
  delay(2000);
  arm.write(originalPosition);
  delay(1000);
  opening.write(originalPosition);
  break;

//-----------------Bheaviour03---------------------------------------
  case 2:
  opening.write(70);
  delay(200);
  opening.write(originalPosition);
  delay(200);
  opening.write(70);
  delay(200);
  opening.write(originalPosition);
  delay(200);
  opening.write(70);
  opening.write(originalPosition);
  opening.write(70);
  delay(1000);
  arm.write(110);
  delay(500);
  arm.write(70);
  delay(2000);
  arm.write(80);
  delay(2000);
  arm.write(originalPosition);
  delay(1000);
  opening.write(originalPosition);
  break;


//-----------------Bheaviour04---------------------------------------
  case 3:
  opening.write(70);
  delay(2000);
  opening.write(originalPosition);
  delay(1000);
  opening.write(70);
  delay(200);
  arm.write(110);
  delay(200);
  arm.write(originalPosition);
  delay(200);
  opening.write(originalPosition);
  break;

//-----------------Bheaviour05---------------------------------------
  case 4:
  opening.write(70);
  delay(3000);
  
  for (int angle = 25; angle <= 60;angle++)
  {
    arm.write(angle);
    delay(200);
  
  }

  delay(2000);
  arm.write(110);
  delay(200);
  arm.write(originalPosition);
  delay(200);
  opening.write(originalPosition);
  break;

//-----------------Bheaviour06---------------------------------------
  case 5:
  opening.write(70);
  delay(3000);
  opening.write(originalPosition);
  delay(4000);
  opening.write(70);
  delay(2000);
  arm.write(60);
  delay(200);
  arm.write(originalPosition);
  delay(200);
  arm.write(60);
  delay(200);
  arm.write(originalPosition);
  delay(200);
  arm.write(110);
  delay(200);
  arm.write(originalPosition);
  delay(200);
  opening.write(originalPosition);
  break;
  }



}


