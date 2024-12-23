#include <iostream>

using namespace std;

int main(){

    int day = 0; // Declare an integer variable to store the day.

    cout << "Enter the day: "; // Prompt the user to enter a day number.

    cin >> day; // Read the user input for the day number.
    
    // Start of the switch statement to handle different cases based on the value of 'day'.
    switch (day) {
    case 1: // If 'day' is 1, print "Monday".
        cout << "Monday\n";
        break; // Exit the switch statement after printing the result for this case.
    case 2: // If 'day' is 2, print "Tuesday".
        cout << "Tuesday\n";
        break; // Exit the switch statement after printing the result for this case.
    case 3: // If 'day' is 3, print "Wednesday".
        cout << "Wednesday\n";
        break; // Exit the switch statement after printing the result for this case.
    case 4: // If 'day' is 4, print "Thursday".
        cout << "Thursday\n";
        break; // Exit the switch statement after printing the result for this case.
    case 5: // If 'day' is 5, print "Friday".
        cout << "Friday\n";
        break; // Exit the switch statement after printing the result for this case.
    case 6: // If 'day' is 6, print "Saturday".
        cout << "Saturday\n";
        break; // Exit the switch statement after printing the result for this case.
    case 7: // If 'day' is 7, print "Sunday".
        cout << "Sunday\n";
        break; // Exit the switch statement after printing the result for this case.
    default: // If 'day' doesn't match any case (1-7), print "Day invalid".
        cout << "Day invalid\n";
        break; // Exit the switch statement after printing the error message.
    }

    return 0; // Return 0 to indicate successful program execution.
}
