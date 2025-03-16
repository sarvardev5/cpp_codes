#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main() {
  string name;
  int age;
  cout << "What is your name?: ";
  cin >> name;
  cout << "How old are you?: ";
  cin >> age;
  if(age >= 18) {
    cout << "Hello " << name << '\n';
    cout << "Authentification was successfuly ended";
    } else {
    cout << "You must be 18+ years old to visit this section!" << '\n';
    cout << "Your current age: " << age;
  }
  return 0;
}
