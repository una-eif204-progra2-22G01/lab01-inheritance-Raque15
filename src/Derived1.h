//
// Created by Raquel on 21/3/2022.
//

#ifndef LAB01_INHERITANCE_RAQUE15_DERIVED1_H
#define LAB01_INHERITANCE_RAQUE15_DERIVED1_H

#include <ostream>
#include "Base.h"

using namespace std;

class Derived1 : public Base{
private:
    int num;
public:
    Derived1(int num);

    Derived1();

    ~Derived1();

    void do_something()override;

    friend ostream &operator<<(ostream &os, const Derived1 &derived1);
};


#endif //LAB01_INHERITANCE_RAQUE15_DERIVED1_H
