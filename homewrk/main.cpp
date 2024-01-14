#include <iostream>

using namespace std;

int main() {
  string firstName, lastName, fullName;

  cout << "Enter your first name: ";
  getline(cin,firstName);
  cout << "Enter your last name: ";
  cin >> lastName;

  fullName = firstName + " " + lastName;


  cout << "The size of your first name is: " << firstName.size() << endl;
  cout << "The size of your last name is: " << lastName.size() << endl;
  cout << "The total size of your name is: " << fullName.size() << endl;
  cout << firstName<<"\n";
  if (firstName.size() > 2) {
    cout << "If you remove the first and the third letters of your first name, it will become: "
              << firstName.substr(1,1) << firstName.substr(3) << endl;
  }
  else {
    cout << "Your first name is too short to remove the first and the third letters." << endl;
}

return 0;
}

