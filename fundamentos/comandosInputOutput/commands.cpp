#include <iostream>

using namespace std;

int main(){
    
    int num;

    cout << "Enter the number: "; // Displays a message asking the user to enter a number.

    // Read the keyboard input
    cin >> num; // Reads the user's input and stores it in the variable 'num'. There is no need for a format specifier like in C, as input handling is done directly by 'cin'.

    cout << "Number: " << num << endl; // Displays the value of 'num', concatenating the value directly with the text.

    return 0;
}
