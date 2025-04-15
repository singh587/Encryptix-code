#include <iostream>
using namespace std;

int main() {
    double num1, num2;  // Two numbers
    char op;            // Operator (+, -, *, /)

    // Taking user input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    // Performing the operation
    if (op == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } 
    else if (op == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } 
    else if (op == '*') {
        cout << "Result: " << num1 * num2 << endl;
    } 
    else if (op == '/') {
        if (num2 == 0) {
            cout << "Error! Division by zero is not allowed." << endl;
        } else {
            cout << "Result: " << num1 / num2 << endl;
        }
    } 
    else {
        cout << "Invalid operator! Please use +, -, *, or /." << endl;
    }

    return 0;
}
