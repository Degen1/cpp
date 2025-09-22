#include <iostream>
using namespace std;

int main() {


    int age;

    cout << "enter your age: " ;
    cin >> age;

     if (age >= 100 ) {

        cout << "you are too old to enter this site!";
}
    else if (age >= 18){
        cout << "welcome to the site!";
    }

    else if (age < 0 ) {

        cout << "you have not been born yet!";
}
    else { 
        cout << "you are not old enough to enter!";
    }

    return 0;
}