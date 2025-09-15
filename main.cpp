#include <iostream>
using namespace std;


int main() {
    
int age;

 cout << "enter you age: ";
    cin >> age;

    if(age < 18) {
        cout << "you are a minor";
    } else if (age >18) {
        cout << "you are an adult";
    } else if (age == 18) {
        cout << "welome to adulthood";
    }



    return 0;
}

