//
// Created by savat on 20-Apr-22.
//

#ifndef _2022__JANUAR_KVADRAT_H
#define _2022__JANUAR_KVADRAT_H
#include "Figura.h"

class Kvadrat : public Figura{
public:
    Kvadrat() : Figura(), sideLen(0.0){}
    Kvadrat(float valX, float valY, float valSideLen) : Figura(valX, valY) , sideLen(valSideLen) {

    }
    Kvadrat(const Kvadrat& val) : Figura(val) , sideLen(val.sideLen) {}
    std::string vratiString() override{
        return
        "x: " + std::to_string(x) +
        " y: " + std::to_string(y) +
        " sideLen: " + std::to_string(sideLen);
    }
    ~Kvadrat() {std::cout << "Destruction of Kvadrat!\n";}
    void set(float valX, float valY, float valSideLen){
        if(valSideLen > 0){
            x = valX;
            y = valY;
            sideLen = valSideLen;
        }
        else{
            std::cout << "Invalid sideLen!"<<std::endl;
            std::cout << "Enter new value!"<<std::endl;
            std::cin >> valSideLen;
            set(valX,valY,valSideLen);
        }
    }
    void print(){
        std::cout << "x: "<< this->x <<" y: "<< this->y<< " sideLen: "<< this->sideLen<< std::endl;

    }
    float povrsina(){
        return sideLen * sideLen;
    }
    float obim(){
        return (sideLen * 4);
    }
private:
    float sideLen;
};


#endif //_2022__JANUAR_KVADRAT_H
