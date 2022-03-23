//
// Created by Raquel on 20/3/2022.
//

#ifndef LAB01_INHERITANCE_RAQUE15_BASE_H
#define LAB01_INHERITANCE_RAQUE15_BASE_H
#include <iostream>
#include <sstream>


using namespace std;

class Base {

public:

    Base();

    ~Base();

    virtual void do_something();

    friend ostream &operator<<(ostream &os, const Base &base);

};


#endif //LAB01_INHERITANCE_RAQUE15_BASE_H
