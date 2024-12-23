#include <iostream> // Standard library for input/output operations.

using namespace std; // Simplifies the usage of standard namespace elements.

int main() { // Main function, the entry point of the program.

    // Declare an array named 'numbers' with space for 5 integer elements.
    // Arrays are a linear data structure used to store multiple values of the same data type.
    int numbers[5];

    // A loop to iterate through the array indices (0 to 4).
    for (int i = 0; i < 5; i++) {
        numbers[i] = i; // Assign the current index value to the corresponding array element.
        cout << numbers[i] << endl; // Print the value of the current array element to the console.
    }

    return 0; // Return 0, indicating successful program execution.
}
