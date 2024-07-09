#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    int num1, num2, sum, difference, product, quotient;
    
    // Input: Get two numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    // Output: Display the results
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    // Control structure: Conditional statement
    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << endl;
    } else if (num1 < num2) {
        cout << num1 << " is less than " << num2 << endl;
    } else {
        cout << num1 << " is equal to " << num2 << endl;
    }

    // Control structure: Loop
    cout << "Numbers from 1 to 10: ";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

