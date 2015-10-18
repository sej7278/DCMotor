// include headers
#include "Arduino.h"
#include "DCMotor.h"

// constructor
DCMotor::DCMotor(int m1enable, int m1input1, int m1input2, int m1speed, int m2enable, int m2input1, int m2input2, int m2speed)
{
    _m1enable = m1enable;
    _m1input1 = m1input1;
    _m1input2 = m1input2;
    _m1speed  = m1speed;
    _m2enable = m2enable;
    _m2input1 = m2input1;
    _m2input2 = m2input2;
    _m2speed  = m2speed;

    // set pins as outputs
    pinMode(_m1enable, OUTPUT);
    pinMode(_m1input1, OUTPUT);
    pinMode(_m1input2, OUTPUT);
    pinMode(_m2enable, OUTPUT);
    pinMode(_m2input1, OUTPUT);
    pinMode(_m2input2, OUTPUT);

    // set the speed of the motors between 0-255
    analogWrite(_m1enable, _m1speed);
    analogWrite(_m2enable, _m2speed);
}

void DCMotor::stop(void)
{
    // cut power to motors
    digitalWrite(_m1enable, LOW);
    digitalWrite(_m2enable, LOW);
}

void DCMotor::forward(void)
{
    // motor1
    digitalWrite(_m1enable, HIGH);
    digitalWrite(_m1input1, HIGH);
    digitalWrite(_m1input2, LOW);

    // motor2
    digitalWrite(_m2enable, HIGH);
    digitalWrite(_m2input1, HIGH);
    digitalWrite(_m2input2, LOW);
}

void DCMotor::backward(void)
{
    // motor1
    digitalWrite(_m1enable, HIGH);
    digitalWrite(_m1input1, LOW);
    digitalWrite(_m1input2, HIGH);

    // motor2
    digitalWrite(_m2enable, HIGH);
    digitalWrite(_m2input1, LOW);
    digitalWrite(_m2input2, HIGH);
}

void DCMotor::right(void)
{
    // motor1
    digitalWrite(_m1enable, HIGH);
    digitalWrite(_m1input1, HIGH);
    digitalWrite(_m1input2, LOW);

    // motor2
    digitalWrite(_m2enable, LOW);
    digitalWrite(_m2input1, HIGH);
    digitalWrite(_m2input2, LOW);
}

void DCMotor::left(void)
{
    // motor1
    digitalWrite(_m1enable, LOW);
    digitalWrite(_m1input1, HIGH);
    digitalWrite(_m1input2, LOW);

    // motor2
    digitalWrite(_m2enable, HIGH);
    digitalWrite(_m2input1, HIGH);
    digitalWrite(_m2input2, LOW);
}
