// Problem-1: Create a small calculator which performs operations such as Addition, Subtraction, Multiplication and Division using class.
//   Calculator inputs :> ‘a’, ‘b’ and ‘type of operation’
//   Datatype :> ‘a’ = double, ‘b’ = double, ‘type of operation’ = string


#include <iostream>
using namespace std;

class Calculator {
public:
    double calculate(double a, double b, string operation) {
        if (operation == "add") return a + b;
        else if (operation == "subtract") return a - b;
        else if (operation == "multiply") return a * b;
        else if (operation == "divide") {
            if (b != 0) return a / b;
            else {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
        }
        else {
            cout << "Invalid operation!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    double a, b;
    string op;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operation (add, subtract, multiply, divide): ";
    cin >> op;

    double result = calc.calculate(a, b, op);
    cout << "Result: " << result << endl;

    return 0;
}