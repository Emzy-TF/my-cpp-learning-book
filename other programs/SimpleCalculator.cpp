#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    string operation;
    char again;

    cout << "╔═══════════════════════════╗\n";
    cout << "║        EmmyCalc 2.0       ║\n";
    cout << "╚═══════════════════════════╝\n";

    do {
        cout << "Supported operations: +, -, *, /, ^ (power), sqrt, mod\n";
        cout << "Enter first number: ";
        cin >> x;

        cout << "Enter operation: ";
        cin >> operation;

        cout << fixed << setprecision(2); // formatting

        if (operation == "sqrt") {
            char sign;
            cout << "Enter sign before number (+ or -): ";
            cin >> sign;

            cout << "Enter number: ";
            cin >> x;

            if (sign == '-') {
                cout << "√(" << sign << x << ") = " << sqrt(x) << "i (imaginary)" << endl;
            } else if (sign == '+') {
                cout << "√(" << x << ") = " << sqrt(x) << endl;
            } else {
                cout << "Invalid sign. Defaulting to +\n";
                cout << "√(" << x << ") = " << sqrt(x) << endl;
            }
        }
        else {
            cout << "Enter second number: ";
            cin >> y;

            if (operation == "+" || operation == "add") {
                cout << x << " + " << y << " = " << (x + y) << endl;
            }
            else if (operation == "-" || operation == "subtract") {
                cout << x << " - " << y << " = " << (x - y) << endl;
            }
            else if (operation == "*" || operation == "x" || operation == "multiply") {
                cout << x << " * " << y << " = " << (x * y) << endl;
            }
            else if (operation == "/" || operation == "divide") {
                if (y != 0)
                    cout << x << " / " << y << " = " << (x / y) << endl;
                else
                    cout << x << " / " << y << " = undefined" << endl;
            }
            else if (operation == "^" || operation == "power") {
                cout << x << " ^ " << y << " = " << pow(x, y) << endl;
            }
            else if (operation == "%" || operation == "mod") {
                if (y != 0)
                    cout << "Modulus of " << x << " % " << y << " = " << fmod(x, y) << endl;
                else
                    cout << "Modulus undefined (divide by zero)." << endl;
            }
            else {
                cout << "❌ Invalid operation entered." << endl;
            }
        }

        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\n👋 Thank you for using EmmyCalc 2.0.\n";
    return 0;
}
