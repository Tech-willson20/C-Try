#include <iostream>

using namespace std;

int main()
{
 float weight;
cout<<"Enter your Weight on Earth:\n";
cin>> weight;
cout<<"You weight is "<<weight<< "\n";

string  planet;
cout<<"Among the rest 7 planet,Where do u want to fight\n"<<"Mercury\n"<<"Venus\n"<<"Mars\n"<<"JUpiter\n"<<"Saturn\n"<<"Uranus\n"<<"Neptune\n";
cin >> planet;
//w = mg.
if (planet =="Mercury"){
  float new_mass;
  new_mass=(weight/9.81)*0.38;
  cout<<"Your weight at Mercury is "<<new_mass<<"\n";
}
 else if (planet =="Venus"){
  float new_mass;
  new_mass=(weight/9.81)*0.91;
  cout<<"Your weight at Venus is "<<new_mass<<"\n";
}
else if (planet =="Mars"){
  float new_mass;
  new_mass=(weight/9.81)*0.38;
  cout<<"Your weight at Mars is "<<new_mass<<"\n";
}
else if (planet =="Jupiter"){
  float new_mass;
  new_mass=(weight/9.81)*2.34;
  cout<<"Your weight at Jupiter is"<<new_mass<<"\n";
}
 else if (planet =="Saturn"){
  float new_mass;
  new_mass=(weight/9.81)*1.06;
  cout<<"Your weight at Saturn is "<<new_mass<<"\n";
}
else if (planet =="Uranus"){
  float new_mass;
  new_mass=(weight/9.81)*0.92;
  cout<<"Your weight at Uranus is "<<new_mass<<"\n";
}
 else if (planet =="Neptune"){
  float new_mass;
  new_mass=(weight/9.81)*1.19;
  cout<<"Your weight at Neptune is "<<new_mass<<"\n";
}
else{
  cout<<"Pleas input should start with capital letter and check you spelling\n"<<"Try again \n";
}
    return 0;
}
