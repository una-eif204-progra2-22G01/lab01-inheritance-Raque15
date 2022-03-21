//
// Created by Raquel on 21/3/2022.
//

#ifndef LAB01_INHERITANCE_RAQUE15_DERIVED2_H
#define LAB01_INHERITANCE_RAQUE15_DERIVED2_H

#include "Base.h"

class Derived2 :public Base{

public:


    Derived2();

    ~Derived2();

    void do_something() override;

    string  toString();
};


#endif //LAB01_INHERITANCE_RAQUE15_DERIVED2_H
