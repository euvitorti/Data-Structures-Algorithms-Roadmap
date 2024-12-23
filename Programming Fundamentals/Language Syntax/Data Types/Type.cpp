#include <iostream> // Standard library for input/output operations.

using namespace std; // Simplifies the use of standard namespace elements.

// Primitive data types in C++:
// - int: Used to store integer values (positive, negative, or zero).
//     Example: 
//         int numIntPositive = 10; // A positive integer.
//         int numIntNegative = -10; // A negative integer.
// - double: A double-precision floating-point type for storing decimal numbers.
//     Example: 
//         double numDouble = 10.5; // Stores 10.5 with higher precision than 'float'.
// - float: A single-precision floating-point type for storing decimal numbers.
//     Example: 
//         float numFloat = 10.5; // Similar to 'double' but with less precision.
// - char: Used to store a single character or ASCII value.
//     Example:
//         char caractere = 'a'; // A valid character assignment.
//         char caractere = '8'; // Also valid as it's a single character.
// - void: A special data type that signifies no value or return, often used in functions.
// - bool: A boolean type that stores either 'true' or 'false'.
//     Example: 
//         bool isTrue = true; // Valid assignment.
//         bool isFalse = false; // Valid assignment.

// Example of incorrect assignment:
// int number = true; // This is incorrect because 'int' and 'bool' are different data types.

int main() { // Main function, the entry point of the program.

    // Declaring an integer variable with the maximum value of a 32-bit signed integer.
    int number = 2147483647; 
    // int number = 21474836479; // Uncommenting this line would result in an error 
    // because the value exceeds the range of 'int'.

    // Prints the size (in bytes) of the variable 'number' to the console.
    cout << sizeof(number) << endl; // 'sizeof' operator returns the size of a variable or data type.

    // Declaring a long integer variable to store a larger value.
    long int numberLong = 21474836479; // A 'long int' can store larger values than a regular 'int'.

    // Prints the size (in bytes) of the variable 'numberLong' to the console.
    cout << sizeof(numberLong) << endl; // The size of 'long int' is typically 8 bytes on a 64-bit system.

    return 0; // Exits the main function, indicating the program ran successfully.
}
