#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Ask the user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Calculate
    int sum = num1 + num2;
    int product = num1 * num2;

    // Show results
    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;

    return 0;
}
