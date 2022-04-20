//
// Created by savat on 20-Apr-22.
//

#ifndef _2022__JANUAR_PRAVOUGAONIK_H
#define _2022__JANUAR_PRAVOUGAONIK_H
#include "Figura.h"

class Pravougaonik : public Figura{
public:
    Pravougaonik() : Figura(), sideA(0.0), sideB(0.0){}
    Pravougaonik(float valX, float valY, float valSideA,float valSideB) : Figura(valX, valY) , sideA(valSideA), sideB(valSideB) {}
    ~Pravougaonik() {std::cout << "Destruction of Pravougaonik!\n";}
    Pravougaonik(const Pravougaonik& val) : Figura(val), sideA(val.sideA), sideB(val.sideB){}
    void set(float valX, float valY, float valSideA, float valSideB){
        if(valSideA > 0 && valSideB){
            x = valX;
            y = valY;
            sideA = valSideA;
            sideB = valSideB;
        }
        else{
            std::cout << "Invalid sideLen!"<<std::endl;
            std::cout << "Enter new value for A!"<<std::endl;
            std::cin >> valSideB;
            std::cout << "Enter new value for B!"<<std::endl;
            std::cin >> valSideB;
            set(valX,valY,valSideA,valSideB);
        }
    }
    std::string vratiString() override{
        return
        "x: " + std::to_string(x) +
        " y: " + std::to_string(y) +
        " sideA: " + std::to_string(sideA) +
        " sideB: " + std::to_string(sideB);

    }
    void print(){
        std::cout
        << "x: "<< this->x
        <<" y: "<< this->y
        <<" sideA: "<< this->sideA
        <<" sideB: "<< this->sideB
        << std::endl;

    }
    float obim(){
        return sideA * 2 + sideB * 2;

    }
    float povrsina(){
        return sideB * sideA;
    }
private:
    int sideA;
    int sideB;

};


#endif //_2022__JANUAR_PRAVOUGAONIK_H
