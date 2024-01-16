#include <iostream>

using namespace std;

int main()
{
    string fullname,firstname,lastname;
    cout <<  "Please what is your first name"<< endl;
    cin >> firstname;
    cout<<"PLease your name last name"<<endl;
    cin>>lastname;
    fullname=firstname+lastname;
    cout <<"your Fullname is  "<<fullname<<endl;
    cout<<"The size of your name  is "<<firstname.length();
    return 0;
}
