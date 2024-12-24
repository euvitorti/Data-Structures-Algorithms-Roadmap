#include <iostream> // Include the library for input and output.

using namespace std; // Use the standard namespace to simplify code syntax.

int main() {

    int i = 0; // Initialize an integer variable `i` with the value 0.

    // The do-while loop is used here because it guarantees that the code inside the loop
    // will execute at least once, even if the condition is false at the beginning.
    do {
        cout << i << "\n"; // Print the current value of `i` followed by a newline.
        i++; // Increment the value of `i` by 1.
    } while (i < 5); // Continue looping as long as `i` is less than 5.

    return 0; // Return 0 to indicate successful program execution.
}
