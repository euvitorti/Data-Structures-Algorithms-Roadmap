#include <iostream>

using namespace std;

int main() {

    // Declare an array named 'numbers' with space for 5 integer elements.
    // Arrays are a linear data structure used to store multiple values of the same data type.
    int numbers[5];

    // A loop to iterate through the array indices (0 to 4).
    // It initializes each array element with the value of its index.
    for (int i = 0; i < 5; i++) {
        numbers[i] = i; // Assign the current index value to the array element.
        cout << numbers[i] << endl; // Print the value of the current array element.
    }

    return 0;
}