#pragma once
#include <MiniCom.h>
#include <Servo.h>
#include <Led.h>
#include <storage.h>



class DoorLock: public MiniCom, public Servo {
private:
    String input="";
    String inputStar="";
    String password = readRom(100);
    bool bInput = false; 
    int timerId = -1; 
    int count = 1; //비밀번호 틀린횟수
    bool bSetPassword = false;
    

public:
    void process(char key);
    void check();
    void tick();
    void reset();
    void setLock();
    void setPassword();
};
    



