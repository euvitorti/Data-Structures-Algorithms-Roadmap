// Variables are spaces in the RAM memory.
// While the program is running, it can ask the system to allocate some spaces.
// The system can delete, update, and create them at any time.
// Variables are containers in programming that store data values. Each variable has:
// A name: Used to identify the variable.
// A data type: Determines the kind of data the variable can hold (e.g., integer, string, boolean).
// A value: The actual data stored in the variable.

// DON'T FORGET THE ;

# include <iostream>

using namespace std;

int main(){

    int firstValue = 0;
    int secondValue = 0;

    // Reading the user's input.

    cout << "Enter the first value: ";
    cin >> firstValue;

    cout << "Enter the second value: ";
    cin >> secondValue;

    float grade = (firstValue + secondValue) / 2;
    cout << grade << endl;

    return 0;
}