#include "Derived1.h"
#include "Derived2.h"
#include <iostream>

using namespace std;
// function main begins program execution

int main() {
    cout << "Welcome to the UNA!" << endl;

    Derived1 derived1;
    cout<< derived1.toString();
    derived1.do_something();



   Derived2 derived2;
   cout<<derived2.toString();
    derived2.do_something();

    system ("pause");
    return 0;
}  // end function main


