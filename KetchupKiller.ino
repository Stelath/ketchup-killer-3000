#include <Servo.h>

const int buttonPin = 2; // the number of the pushbutton pin
const int servoPin = 3;  // the number of the LED pin

// Hold whether the button is activated or deactivated
int buttonState = 0;

// Servo variable
Servo KetchupServo;

void setup()
{
    KetchupServo.attach(servoPin);
    // initialize the pushbutton pin as an input:
    pinMode(buttonPin, INPUT);
}

void loop()
{
    buttonState = digitalRead(buttonPin);

    if (buttonState == HIGH)
    {
        Servo1.write(0);
        Servo1.write(45);
    }
    else
    {
        Servo1.write(90);
    }
}