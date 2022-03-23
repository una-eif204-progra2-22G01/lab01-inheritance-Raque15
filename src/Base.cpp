//
// Created by Raquel on 20/3/2022.
//

#include "Base.h"


Base::~Base() {
    cout<<"Destructor Class Base"<<endl;
}



void Base::do_something(){
    cout<<"Base!!!" <<endl;
}

Base::Base() {}

ostream &operator<<(ostream &os, const Base &base) {
    return os;
}


