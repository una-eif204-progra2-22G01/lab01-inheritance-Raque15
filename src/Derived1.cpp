//
// Created by Raquel on 21/3/2022.
//

#include "Derived1.h"
//Constructors



//Destructor
Derived1::~Derived1() {
    cout<<"Destructor Class Derived 1"<<endl;
}

//Set's y Get's


//Additional methods
void Derived1::do_something(){
    cout << "Derived1!!!" << endl;
}

string Derived1::toString() {
    stringstream s;
    s<<"---INFORMACION CLASS DERIVED 1---"<<endl;

    return s.str();
}

Derived1::Derived1() {}


