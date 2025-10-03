#include <iostream>
using namespace std;

void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

int main() {

bakePizza("mushroom", "onion");

    return 0;
}


void bakePizza() {
    cout << "Baking a plain pizza" << endl;
}
void bakePizza(string topping);

void bakePizza(string topping1) {
    cout << "here is your " << topping1 << " pizza" << endl;
}

void bakePizza(string topping1, string topping2) {
    cout << "here is your " << topping1 << " and " << topping2 << " pizza" << endl;
}