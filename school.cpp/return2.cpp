#include <iostream>
using namespace std;

string combineStrings(string firstName, string lastName);

int main() {

string firstName = "John";
string lastName = "Doe";
string fullName = combineStrings(firstName, lastName);

cout << "hello: " << fullName << endl;

    return 0;
}

string combineStrings(string firstName, string lastName) {
     return firstName + " " + lastName;
}
