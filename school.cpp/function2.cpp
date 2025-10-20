#include <iostream>
using namespace std;

int happy(string name, int age, bool birthday, char letter, double gpa);

int main  () {

    int age;
    string name;
    bool birthday;
    char letter;
    double gpa;


    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "is it your birthday today (1 for yes/0 for no): ";
    cin >> birthday;
    cout << "Enter your favorite letter: ";
    cin >> letter;
    cout << "Enter your GPA: ";
    cin >> gpa;

   happy(name,age,birthday,letter, gpa);
   


    return 0;
}

int happy(string name, int age, bool birthday, char letter, double gpa) {

    cout << "happy birthday  " << name << endl;
    cout << "you are " << age << " years old!!!" << endl;
    cout << birthday << " your birthday is today!" << endl;
    cout << letter << " is your favorite letter!" << endl;
    cout << "your gpa is " << gpa << endl;


    return 0;
}