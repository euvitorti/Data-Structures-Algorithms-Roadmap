#include <iostream>

using namespace std;

// Primitive data types in C++
// int numIntPositive = 10; // An integer that stores a positive value.
// int numIntNegative = -10; // An integer that stores a negative value.
// double numDouble = 10.5; // A double precision floating point number (can store decimals).
// float numFloat = 10.5; // A single precision floating point number (also stores decimals).
// char caractere = 'a'; // A character variable that stores a single character. This is valid because 'char' only accepts one character.
// char caractere = '8'; // This is also valid because it's a single character ('8').
// - void: A special data type that signifies no value or return.
// - bool: A boolean type that stores either 'true' or 'false'.
// Example of incorrect assignment: int number = true; // This is incorrect because 'int' and 'bool' are different data types.

int main() {
    // Declaring an integer variable with the maximum value of a 32-bit signed integer (2147483647).
    int number = 2147483647;
    // int number = 21474836479; // This line would result in an error because the number is too large for an 'int' type.

    // Prints the size (in bytes) of the variable 'number' to the console.
    cout << sizeof(number) << endl; // 'sizeof' is an operator that returns the size of a variable or data type.

    // Declaring a long integer variable to store a larger value.
    long int numberLong = 21474836479; // A long integer is typically used for larger values than a regular 'int'.
    // Prints the size (in bytes) of the variable 'numberLong' to the console.
    cout << sizeof(numberLong) << endl; // The size of 'numberLong' will usually be 8 bytes on a 64-bit system.

    return 0; // Exits the main function, indicating the program ran successfully.
}
