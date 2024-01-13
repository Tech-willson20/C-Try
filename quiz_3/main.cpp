#include <iostream>

using namespace std;

int main()
{



    /* write a c++ program the read in the line of text from the user using the getline() function and the output the lenght of the text in the console*/
    string User_name;
    cout << "Please enter your name:\n"<<endl;
    getline(cin,User_name);

    cout<<"The lenght of your name is "<<User_name.length();




    return 0;
}
