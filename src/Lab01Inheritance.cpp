#include "Derived1.h"
#include "Derived2.h"
#include <iostream>

using namespace std;
// function main begins program execution

int main() {
    cout << "Welcome to the UNA!" << endl;

    Derived1 derived1;
    derived1.do_something();



   Derived2 derived2;
    derived2.do_something();



    system ("pause");
    return 0;
}  // end function main


