//
// Created by savat on 20-Apr-22.
//

#ifndef _2022__JANUAR_FIGURA_H
#define _2022__JANUAR_FIGURA_H
#include "iostream"
#include "string"

class Figura{
public:
    virtual void set(float valX, float valY){
        this->x = valX;
        this->y = valY;
    }
    virtual void print(){
        std::cout << "x: "<< this->x <<" y: "<< this->y<< std::endl;
    }
    virtual std::string vratiString(){
        return "x: " + std::to_string(x) + " y: " + std::to_string(y);;
    }
    Figura() : x(0.0), y(0.0){}
    Figura(float valX, float valY) : x(valX), y(valY) {}
    Figura(const Figura& val){
        this->x = val.x;
        this->y = val.y;
    }
    virtual float povrsina() {return 0.0;};
    virtual float obim() {return 0.0;};
    virtual ~Figura() { std::cout << "Destruction of Figura!\n";}

protected:
    float x;
    float y;
};
#endif //_2022__JANUAR_FIGURA_H
