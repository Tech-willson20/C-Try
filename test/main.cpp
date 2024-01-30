#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    a=5;
    b=5;
     c= a^b;
    cout << "The first Value is" <<c<< endl;
    c=a|b;
    cout << "The second Value is" <<c <<endl;
    c=~b;
    cout << "The third Value is" <<c<< endl;
    c = 5<<2;
    cout <<"The fourth Value is"<<c<<endl;
    return 0;
}
