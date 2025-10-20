#include <iostream>
using namespace std;


struct student{
    string name;
    double gpa;
    bool enrolled;

};


int main() {

student student1;
student1.name = "Alice";
student1.gpa= 3.2;
student1.enrolled = true;

student student2;
student2.name = "james";
student2.gpa= 3.5;
student2.enrolled = false;

student student3;
student3.name = "bob";
student3.gpa= 4.0;
student3.enrolled = true;

cout << "Name: " << student1.name << endl;
cout << "GPA: " << student1.gpa << endl;
cout << "Enrolled: " << student1.enrolled << endl;

cout << "Name: " << student2.name << endl;
cout << "GPA: " << student2.gpa << endl;
cout << "Enrolled: " << student2.enrolled << endl;

cout << "Name: " << student3.name << endl;
cout << "GPA: " << student3.gpa << endl;
cout << "Enrolled: " << student3.enrolled << endl;

    return 0;
}