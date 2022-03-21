//
// Created by Raquel on 20/3/2022.
//

#include "Base.h"


Base::~Base() {
    cout<<"Destructor Class Base"<<endl;
}



string Base::toString(){
    stringstream s;
    s<<"---INFORMACION DE LA CLASE BASE---"<<endl;

    return s.str();

}

void Base::do_something(){
    cout<<"Base!!!" <<endl;
}

Base::Base() {}


