#include <iostream>
#include <vector>
#include <string>

// Class to check if a number is even or odd
class EvenOdd {
private:
    // Private field to store the number. Private fields can only be accessed within the class.
    int number;

    // Private setter function to set the number. Functions like this control how the field is modified.
    void setNumber(int number) {
        this->number = number; // Assigns the provided value to the private field.
    }

public:
    // Constructor to initialize the EvenOdd class.
    // Constructors are special functions used to initialize objects of the class.
    EvenOdd(int number) {
        setNumber(number); // Calls the setter function to initialize the number.
    }

    // Getter function to access the private field "number".
    // Getter functions provide controlled access to private fields.
    int getNumber() const {
        return number;
    }

    // Public function to determine if the number is even or odd.
    // This function demonstrates user-defined functionality, which is specific logic created by the developer.
    std::string isEvenOrOdd() const {
        // Uses the modulus operator (%) to check if the number is divisible by 2.
        // Returns a string indicating whether the number is even or odd.
        return (getNumber() % 2 == 0) ? "Is even" : "Is odd";
    }
};

// Function to read a list of numbers from the user.
// This is a user-defined function designed to manage user input in a specific way.
std::vector<int> readInputs() {
    std::vector<int> numbers; // Creates an empty vector to store the numbers.
    int number;

    std::cout << "Enter numbers (type -1 to stop):" << std::endl;
    while (true) {
        std::cin >> number; // Uses a built-in function (cin) to read user input from the console.
        if (number == -1) { // A sentinel value (-1) is used to end the input loop.
            break; // Exits the loop when the user types -1.
        }
        numbers.push_back(number); // Adds the number to the vector using a built-in vector function.
    }

    return numbers; // Returns the list of numbers.
}

// Function to process a list of numbers and determine if each is even or odd.
// This user-defined function uses a loop to iterate through the list and performs specific logic.
void processNumbers(const std::vector<int>& numbers) {
    for (int number : numbers) { // Uses a range-based for loop to iterate over the vector.
        EvenOdd evenOdd(number); // Creates an EvenOdd object for each number.
        std::string result = evenOdd.isEvenOrOdd(); // Calls the user-defined function isEvenOrOdd.
        std::cout << "Number " << number << ": " << result << std::endl; // Prints the result using built-in output function.
    }
}

// Main function: The entry point of the program.
// The main function is a built-in function that serves as the starting point of execution in C++ programs.
int main() {
    std::vector<int> numbers = readInputs(); // Calls the user-defined function to read inputs from the user.
    processNumbers(numbers); // Calls the user-defined function to process and analyze the numbers.
    return 0; // Returns 0 to indicate successful program execution (a convention in built-in main function behavior).
}