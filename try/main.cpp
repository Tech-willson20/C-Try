#include <iostream>

using namespace std;
class A{
public:
    void fun (){
    cout<<"hello world";
    };
    void kiss(){
    cout<<"Welcome the world class"<<endl;
    };
    };
class AB:public A{
    };
class ABC:public AB{
    };

int main()
{
   ABC nab;
   nab.kiss();
   nab.fun();
}

