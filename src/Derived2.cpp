//
// Created by Raquel on 21/3/2022.
//

#include "Derived2.h"

//Constructors



//Destructor
Derived2::~Derived2() {
    cout<<"Destructor Class Derived 2"<<endl;
}

//Set's y Get's

//Additional methods
 void Derived2::do_something() {
    cout << "Derived2!!!" <<endl;
}

string Derived2::toString() {
    stringstream s;
    s<<"---INFORMACION CLASS DERIVED 2---"<<endl;

    return s.str();
}

Derived2::Derived2() {}

