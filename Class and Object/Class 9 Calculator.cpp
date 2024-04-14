#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }
    double sub(double a, double b) {
        return a - b;
    }
    double mul(double a, double b) {
        return a * b;
    }
    double divi(double a, double b) {
        if (b == 0) {
            cout << "Error! Division by zero." << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;
    double n1, n2;
    char op;

    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> n2;

    switch(op) {
        case '+':
            cout << "Result: " << calc.add(n1, n2) << endl;
            break;
        case '-':
            cout << "Result: " << calc.sub(n1, n2) << endl;
            break;
        case '*':
            cout << "Result: " << calc.mul(n1, n2) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divi(n1, n2) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}

