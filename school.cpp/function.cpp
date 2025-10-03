#include <iostream>
using namespace std;


void happyBithday(string name, int age);

int main() {

    string name = "dejen";
    int age = 20;

happyBithday(name, age);


    return 0;
}


//fuction is declared on top but can be definded later 

void happyBithday(string name, int age) {
    cout << "Happy birthday to " << name << endl;
    cout << "Happy birthday to " << name << endl;
    cout << "Happy birthday dear " << name << endl;
    cout << "you are " << age << " years old" << endl;


   

}