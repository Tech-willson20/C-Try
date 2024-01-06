#include <iostream>
#include<cmath>

using namespace std;

int main(){


    //introduction to the calculate sample//
    cout << "Welcome to wills  Tech  calculate sample" << endl;
    string name;
    cout <<"What is your full name:"<<endl;
    getline(cin,name);
    cout<<"Hello "<<name<<"\nOnce again welcome to Wills Tech calculation sample";


    //operation //
     string operation_mode;
     cout<<"which type of operation do you want to perform:\n1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)\n4. Division (/)\n5. Power (**)\n6. Floor Division (//)\n7. Square of a Number\n8. Square Root of a Number\n if you want to quit press quit or q\n"<<endl;
     cin >> operation_mode;


     //condition//

     if (operation_mode=="1" or operation_mode=="Addition" or operation_mode=="addition"){
        int x,y;
        cout<<"Please in your first number:";
        cin>>x;
        cout<<"Please in your second number:";
        cin>>y;
        cout<<"The result of the sum of "<<x<<" and "<<y<<" is "<<x+y;

     }
     else if (operation_mode=="2" or operation_mode=="Subtraction" or operation_mode=="subtraction"){
        int x,y;
        cout<<"Please in your first number:";
        cin>>x;
        cout<<"Please in your second number:";
        cin>>y;
        cout<<"The result of the differnce of "<<x<<" and "<<y<<" is "<<x-y;

     }



     else if (operation_mode=="3" or operation_mode=="Multiplication" or operation_mode=="multiplication"){
        int x,y;
        cout<<"Please in your first number:";
        cin>>x;
        cout<<"Please in your second number:";
        cin>>y;
        cout<<"The result of the product of "<<x<<" and"<<y<<" is "<<x*y;

     }
     else if (operation_mode=="4" or operation_mode=="Division" or operation_mode=="division"){
        float x,y;
        cout<<"Please in your first number:";
        cin>>x;
        cout<<"Please in your second number:";
        cin>>y;
        cout<<"The result of the division of "<<x<<" "<<y<<" is "<<x/y;

     }
     else if (operation_mode=="5" or operation_mode=="Power" or operation_mode=="power"){
        int x,y;
        cout<<"Please input your base number:";
        cin>>x;
        cout<<"Please input  your expon  number:";
        cin>>y;
        cout<<"The result of the sum of "<<x<<" "<<y<<" is "<<pow(x,y);

     }













    return 0;
}
