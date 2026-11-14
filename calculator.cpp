
#include <iostream>
using namespace std;

int main() {

    double num1, num2;
    char operation;

    // Step 1: Ask for the first number
    cout << "Enter first number: ";
    cin >> num1;

    // Step 2: Ask for the second number
    cout << "Enter second number: ";
    cin >> num2;

    // Step 3: Ask for an operator
    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    // Step 4: Calculate the result
    if (operation == '+') {
        // Write addition code here
        cout << "addition: " << num1 + num2 << endl;

    }
    else if (operation == '-') {
        // Write subtraction code here
cout << " subtraction: " << num1 - num2 << endl;
    }
    else if (operation == '*') {
        // Write multiplication code here
cout << "multiplication:" << num1 * num2 << endl;
    }
    else if (operation == '/') {
        // Write division code here
cout << " division: " << num1 / num2 << endl;
    }
    else {
        cout << "Invalid operation!";
    }

    return 0;
}
