#include <iostream>
using namespace std;

int main() {

    string name;
    int age;
    char grade;
    double gpa;
    bool isMale;


    cout << "enter your name: ";
    cin >> name;
    cout << "enter you age: ";
    cin >> age;
    cout << "enter you grade: ";
    cin >> grade;
    cout << "enter you gpa: ";
    cin >> gpa;
    cout << " male (1 for yes, 0 for no): ";
    cin >> isMale;

    cout << "hello " << name << " yuou are " << age << " years ald, " << "and your grade is " << grade << " with a gpa of a " << gpa << "and is male " << isMale << endl;



    return 0;
}