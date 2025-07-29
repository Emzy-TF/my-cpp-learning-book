#include <iostream>
using namespace std;

// Recursively adds numbers from 1 to k
int sum(int k) {
    if (k > 0) return k + sum(k - 1);
    return 0;
}

// Recursively computes factorial (only valid for 0–10)
int factorial(int n) {
    if (n > 10) {
        cout << "Factorial too large! Max allowed is 10.\n";
        return -1; // Error flag
    }
    if (n > 1) return n * factorial(n - 1);
    return 1;
}

int main() {
    int num1, num2, choice = 1;

    while (choice == 1) {
        cout << "Choose an operation:\n";
        cout << "1. Sum numbers from 1 to n\n"; 
        cout << "2. Calculate factorial of n (0–10)\n";
        cout << "Enter your choice (1 or 2): ";

        int calc;
        cin >> calc;

        switch (calc) {
            case 1:
                cout << "Enter a number to sum from 1 to n: ";
                cin >> num1;
                cout << "Sum from 1 to " << num1 << " = " << sum(num1) << endl;
                break;

            case 2:
                cout << "Enter a number to calculate its factorial (0 - 10): ";
                cin >> num2;
                if (num2 < 0 || num2 > 10) {
                    cout << "Please enter a number between 0 and 10.\n";
                } else {
                    int fact = factorial(num2);
                    if (fact != -1)
                        cout << "Factorial of " << num2 << " = " << fact << endl;
                }
                break;

            default:
                cout << "Invalid option. Please choose 1 or 2.\n";
                break;
        }

        cout << "\nDo you want to calculate again? (1 for yes, 0 for no): ";
        cin >> choice;

        if (choice == 1) {
            cout << "\nRestarting...\n" << endl;
        } else {
            cout << "Exiting the program." << endl;
        }
    }

    return 0;
}
// Note: This code includes basic error handling for factorial input and limits the range to 0–10.
// It also allows the user to choose between summing numbers or calculating factorials, with a