#include <iostream>

using namespace std;

class Calc{
private:
    int a,b;
public:
    int total(){

    cout<< "Enter your first number\n=>";
    cin>> a;
    cout<<"Enter your second number\n=>";
    cin>>b;
    //cout<< "the total of " << a<< "and"<< b << sum<<endl;
    int sum=a+b;
    return sum;}
    Calc(){
    cout<<"Welcome to ucc "<<endl;};

};



int main()
{
    Calc un;
    int a=un.total();


    cout << a<< endl;
    return 0;
}
