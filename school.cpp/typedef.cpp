#include <iostream>
#include <vector>
using namespace std;

// rename/ redefine a data type

typedef string text;
typedef int number;

// or using keyword 

using decimal = double;
using character = char;


int main() {

text name = "John";
number age = 30;
decimal height = 5.9;
character grade = 'A';

cout << name << endl;
cout << age <<  endl;
cout << height <<  endl;
cout << grade << endl;

    return 0;
}