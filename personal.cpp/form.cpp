#include <iostream>
using namespace std;

int main() {

    string name;
    int age;
    char grade;
    double gpa;

    cout << "enter your name: ";
    cin >> name;
    
    cout << "enter your age: ";
    cin >> age;

    cout << "enter your grade: ";
    cin >> grade;

    cout << "enter your gpa: ";
    cin >> gpa;

    cout << "hello " << name << "you are " << age << " years old, " << "and you grade is " << grade << " with a gpa of a " << gpa << endl;


    return 0;
}