//
// Created by savat on 20-Apr-22.
//
#ifndef _2022__JANUAR_KOLEKCIJA_H
#define _2022__JANUAR_KOLEKCIJA_H
#include "Figura.h"
#include "vector"
#include "iostream"
#include "fstream"
#include "string"

class Kolekcija {
public:
    void add(Figura * val){
        if(vec.size() < maxBroj){
            vec.push_back(val);
        }
        else{
            maxBroj += (maxBroj / 2);
        }
    }
    void povrsinaFigura(){
        std::cout <<"Povrsina figura:" << std::endl;
        for(auto x : vec){
            std::cout << x->povrsina() << " ";
        }
        std::cout << std::endl;
    }
    void obimFigura(){
        std::cout <<"Obim figura:" << std::endl;
        for(auto x : vec){
            std::cout << x->obim() << " ";
        }
        std::cout << std::endl;
    }
    void sort(){
        for (int i = 0; i < vec.size()-1; ++i) {
            for (int j = 0; j < vec.size()-1-i; ++j) {
                if(vec.at(j)->obim() > vec.at(j+1)->obim())
                    std::swap(vec.at(j),vec.at(j+1));
            }

        }

    }
    void upisUFajl(std::string path){
        std::ofstream out_file{path};
        std::string line;
        if(!out_file) {
            std::cerr << "Fajl ne postoji!" << std::endl;
        }
        for(auto x: vec){
            out_file << x->vratiString() << std::endl;
        }


        out_file.close();
    }
    Kolekcija(int val) :maxBroj(val) {}
    ~Kolekcija() {std::cout << "Destruction of kolekcija!" << std::endl;}

private:
    std::vector<Figura*> vec;
    int maxBroj;


};


#endif //_2022__JANUAR_KOLEKCIJA_H
