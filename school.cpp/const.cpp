#include <iostream>
using namespace std;

int main() {

    int x;
    x = 5;

    const int AGE = 16;
    const double GPA = 3.2;
    const char GRADE = 'A';
    const string NAME = "john";
    bool isMale = true;

    cout << "hey my name is " << NAME <<  ", i am " << AGE << " years old, my gpa is " << GPA << ", my grade is " << GRADE << ", and it is " << isMale << " that i am" << endl;
    cout << x << endl;


    return 0;

}