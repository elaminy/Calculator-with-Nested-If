#include <iostream>
using namespace std;

// This program is a revision of the calculator using nested if statements instead of a switch statement.
// Inputs, process, and output are the same as in Program 1.

int main() {
    int num1, num2;
    char op;
    cout << "Enter first number, operator, and second number: ";
    cin >> num1 >> op >> num2;

    if (op == '+') {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (op == '-') {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (op == '*') {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if (op == '/') {
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        else
            cout << "Error: Division by zero is not allowed." << endl;
    }
    else {
        cout << "Error: Unsupported operation." << endl;
    }

    return 0;
}
