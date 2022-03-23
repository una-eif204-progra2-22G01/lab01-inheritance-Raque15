//
// Created by Raquel on 21/3/2022.
//

#include "Derived1.h"
//Constructors
Derived1::Derived1() {}
Derived1::Derived1(int num) : num(num) {}

//Destructor
Derived1::~Derived1() {
    cout<<"Destructor Class Derived 1"<<endl;
}

//Set's y Get's


//Additional methods
void Derived1::do_something(){
    cout << "Derived1!!!" << endl;
}


ostream &operator<<(ostream &os, const Derived1 &derived1) {
    os << static_cast<const Base &>(derived1) << " num: " << derived1.num;
    return os;
}






