#include "DoorLock.h"
#include <Led.h>
#include <storage.h>
#include <Button.h>

Led beep(13); 
Button btn(2);  

void DoorLock::process(char key) { 
        tick();
        if(key == '*' && bInput == false){
            input = "";  
            inputStar = "";
            bInput = true;
            onLcd();
            timerId = timer.setTimeout(5000, reset);    //invalid use of non-static member function 오류 발생
        }else if(key =='#'){
            timer.deleteTimer(timerId);
            bInput = false;
            check();
            offLcd();
        }else if(bInput){
            input += key;
            inputStar += '*';
            print(1, inputStar.c_str());
            timer.restartTimer(timerId);
        }
    }

void DoorLock::check(){     
        if(input == password){
            write(90);
            delay(3000);
            write(0);
        }else{//비밀번호 틀렸을때
            count++;
            // reset()
        }if(count==4){
            delay(600000);
        }reset();
    }

void DoorLock::setLock(){   //도어락 세팅작업
    Serial.begin(115200);  
    writeRom(100, "1234");     
    Serial.println(password);    //readRom에서 pwd읽어서 확인해보는 작업 
    btn.setCallback(setPassword);   //invalid use of non-static member function 오류 발생 
}

void DoorLock::setPassword(){
    bSetPassword = !bSetPassword;
    if(bSetPassword){  //새 비밀번호 입력 시작
    input = "";
    inputStar = "";
    bInput = true;
    onLcd();
    }else{
        password = input;
    }
}

void DoorLock::tick(){
        beep.on();
        delay(100);
        beep.off();
    }

void DoorLock::reset(){
        input = "";
        inputStar="";
        bInput = false;
        offLcd();
    }
