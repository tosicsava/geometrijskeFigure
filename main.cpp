//
// Created by savat on 20-Apr-22.
//
#include "Figura.h"
#include "Kvadrat.h"
#include "Pravougaonik.h"
#include "Kolekcija.h"

int main(){
    Kolekcija * uno = new Kolekcija(100);
    Figura * prvi = new Kvadrat(10,10,2);
    Figura * drugo = new Kvadrat(20,20,3);
    Figura * bro = new Pravougaonik(30,30,1,2);
    Figura * miki = new Pravougaonik(50,50, 3, 4);

    uno->add(prvi);
    uno->add(drugo);
    uno->add(bro);
    uno->add(miki);

    std::cout << "Before sorting!" << std::endl;
    uno->obimFigura();
    uno->povrsinaFigura();
    uno->upisUFajl("C:\\Users\\savat\\OneDrive\\Documents\\[02] Code\\[00] Fakultet\\[01] OOP\\[00] Ispiti\\[1] Zadatak\\[2022] Januar\\figure_izlaz.txt");

    uno->sort();
    std::cout  << "After sorting!"<< std::endl;
    uno->obimFigura();
    uno->povrsinaFigura();
    uno->upisUFajl("C:\\Users\\savat\\OneDrive\\Documents\\[02] Code\\[00] Fakultet\\[01] OOP\\[00] Ispiti\\[1] Zadatak\\[2022] Januar\\sortirano.txt");


    delete prvi;
    delete drugo;
    delete bro;
    delete miki;
    delete uno;

    return 0;
}
