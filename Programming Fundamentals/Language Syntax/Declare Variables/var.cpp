// Variables are spaces in the RAM memory.
// While the program is running, it can ask the system to allocate some spaces.
// The system can delete, update, and create them at any time.

// Variables are containers in programming that store data values. Each variable has:
// - A name: Used to identify the variable.
// - A data type: Determines the kind of data the variable can hold (e.g., integer, string, boolean).
// - A value: The actual data stored in the variable.

// DON'T FORGET THE ; (semicolon is required to end each statement)

#include <iostream> // Standard library for input/output operations.

using namespace std; // Simplifies usage of standard namespace elements.

int main() { // Main function, the program's entry point.

    int firstValue = 0; // Declares an integer variable named 'firstValue' and initializes it to 0.
    int secondValue = 0; // Declares another integer variable named 'secondValue' and initializes it to 0.

    // Reading the user's input.
    cout << "Enter the first value: "; // Outputs a message prompting the user for input.
    cin >> firstValue; // Reads an integer input from the user and stores it in 'firstValue'.

    cout << "Enter the second value: "; // Outputs a message prompting the user for input.
    cin >> secondValue; // Reads an integer input from the user and stores it in 'secondValue'.

    float grade = (firstValue + secondValue) / 2; 
    // Declares a float variable named 'grade', calculates the average of 'firstValue' and 'secondValue',
    // and stores the result.

    cout << grade << endl; // Outputs the calculated grade, followed by a new line.

    return 0; // Returns 0, indicating successful execution of the program.
}
