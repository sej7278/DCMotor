#ifndef __DCMOTOR_H__
#define __DCMOTOR_H__

class DCMotor
{
  public:
    DCMotor(int m1enable, int m1input1, int m1input2, int m1speed, int m2enable, int m2input1, int m2input2, int m2speed);
    void forward();
    void backward();
    void left();
    void right();
    void stop();

  private:
    int _m1enable;
    int _m1input1;
    int _m1input2;
    int _m1speed;
    int _m2enable;
    int _m2input1;
    int _m2input2;
    int _m2speed;
};

#endif

/*
http://hardwarefun.com/tutorials/creating-robots-using-arduino-h-bridge

name    aka      l293d pin  connects to
1,2EN   inhibit1 (pin 1)    d6 (pwm)
1A      input1   (pin 2)    d7
2A      input2   (pin 7)    d8
3,4EN   inhibit2 (pin 9)    d9 (pwm)
3A      input3   (pin 10)   d10
4A      input4   (pin 15)   d11
1Y      output1  (pin 3)    to one terminal of motor 1
2Y      output2  (pin 6)    to other terminal of motor 1
3Y      output3  (pin 11)   to one terminal of motor 2
4Y      output4  (pin 14)   to other terminal of motor 2
Vcc1    vss      (pin 16)   to arduino 5V
Vcc2    vc       (pin 8)    to bat+ (6v)
GND     (pin 4,5,12 or 13)  to bat- and arduino GND
*/
