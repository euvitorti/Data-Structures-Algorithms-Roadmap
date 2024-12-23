#include <iostream>  // Header for standard input and output in C++.

using namespace std;  // Allows access to the standard C++ library functions without prefixing them with 'std::'.

int main() {
    int num;  // Declares an integer variable to store the user input.

    cout << "Enter the number: ";  // Displays a message asking the user to enter a number.

    // Reads the user's input from the console and stores it in 'num'.
    // Unlike C, C++ handles input directly through the 'cin' stream.
    cin >> num;  // No need for a format specifier; 'cin' automatically handles the data type.

    // Displays the entered number with a message.
    cout << "Number: " << num << endl;  // Concatenates the string with the value of 'num' and outputs it to the console.

    return 0;  // Exits the main function.
}
