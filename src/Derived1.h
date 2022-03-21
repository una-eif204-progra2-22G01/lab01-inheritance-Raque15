//
// Created by Raquel on 21/3/2022.
//

#ifndef LAB01_INHERITANCE_RAQUE15_DERIVED1_H
#define LAB01_INHERITANCE_RAQUE15_DERIVED1_H
#include "Base.h"

using namespace std;

class Derived1 : public Base{

public:
    Derived1();

    ~Derived1();

    void do_something()override;
    string toString();
};


#endif //LAB01_INHERITANCE_RAQUE15_DERIVED1_H
