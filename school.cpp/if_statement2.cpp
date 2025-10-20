#include <iostream>
using namespace std;

int main() {    


 string name;
 double gpa;


 
 cout << "enter your name: ";
 cin >> name;
 cout << "enter your gpa: ";
 cin >> gpa;


 if (gpa >= 3.0) {
    cout << "hey " << name << " you are on the honor roll!";
    }
    else {
    cout << "hey " << name << " you need to work harder!";
    }



    return 0;   
}            

