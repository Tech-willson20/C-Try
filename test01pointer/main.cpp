#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p; // declare a pointer to an integer
    p = &x; // assign p to the address of x
    *p = 20; // change the value of x to 20 using p
    cout << "The value of x is: " << x << endl; // prints 20
    cout << "The address of x is: " << &x << endl; // prints the memory address of x
    cout << "The value of p is: " << p << endl; // prints the memory address of x
    cout << "The value of *p is: " << *p << endl; // prints the value of x
    return 0;
}
