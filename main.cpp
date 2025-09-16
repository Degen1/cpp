#include <iostream>
using namespace std;


int main() {
    
char op;
double num1;
double num2;
double result;

cout << "calculator" << endl;
cout << "enter either (+, -, *, or /): ";
cin >> op;

cout << "enter number 1: ";
cin >> num1;

cout << "enter number 2: ";
cin >> num2;

switch(op) {
    case '+':   
    result = num1 + num2;
    cout << "result: " << result << endl;
    break;

    case '-':   
    result = num1 - num2;
    cout << "result: " << result << endl;
    break;

    case '*':   
    result = num1 * num2;
    cout << "result: " << result << endl;
    break;

    case '/':   
    result = num1 / num2;
    cout << "result: " << result << endl;
    break;

    default:
    cout << " that wasnt a valid response" << endl;
    break;


}

    return 0;
}

