#include <iostream>
using namespace std;

int main() {
    
  string name;  
  int age;

  cout << "what's yout name: ";
  cin >> name;
  cout << "how old are you: ";
  cin >> age;

if ( age>=18 ){
    cout << "welcome!!! " << name << " you are old enough to enter!!" << endl;
}
 
else if( age<=18 ){
    cout << "hey " << name << " you are not  old enough to enter!!" << endl;
    cout << "please come back when you are old enough!!!" << endl;

}

else {
    cout << "invalid input" << endl;
}

    return 0;

}