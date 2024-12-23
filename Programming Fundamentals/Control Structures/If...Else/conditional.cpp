#include <iostream>

using namespace std;

int main(){

    int number = 0; // Declare an integer variable to store the user input.

    cout << "Enter the number: "; // Prompt the user to enter a number.

    cin >> number; // Read the number entered by the user and store it in the 'number' variable.

    // The 'if' statement checks if the number is divisible by 2 (even number).
    if(number % 2 == 0){ 
        cout << "Is even.\n"; // If the condition is true (number is even), print "Is even."
    } else{ 
        cout << "Is odd.\n"; // If the condition is false (number is odd), print "Is odd."
    }

    return 0; // Return 0 to indicate successful program execution.
}
