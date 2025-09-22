

#include <iostream>
using namespace std;

 typedef char i;
 typedef double love; 

int main() {
    
i op;
love you;
love you2;
love result;

cout << "calculator" << endl;
cout << "enter either (+, -, *, or /): ";
cin >> op;

cout << "enter number 1: ";
cin >> you;

cout << "enter number 2: ";
cin >> you2;

switch(op) {
    case '+':   
    result = you + you2;
    cout << "result: " << result << endl;
    break;

    case '-':   
    result = you - you2;
    cout << "result: " << result << endl;
    break;

    case '*':   
    result = you * you2;
    cout << "result: " << result << endl;
    break;

    case '/':   
    result = you / you2;
    cout << "result: " << result << endl;
    break;
        if (you2 == 0) {
            cout << "error: cannot devide by zero" << endl;
        }
        else { 
            result = you / you2;
            cout << "result: " << result << endl;

        }

    default:
    cout << " that wasnt a valid response" << endl;
    break;


}

    return 0;
}

