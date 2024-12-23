#include <iostream>

using namespace std;

int main(){

    int day = 0;

    cout << "Enter the day: ";

    cin >> day; 
    
    switch (day) {
    case 1:
        cout << "Monday\n";
    break;
    case 2:
        cout << "Tuesday\n";
    break;
    case 3:
        cout << "Wednesday\n";
    break;
    case 4:
        cout << "Thursday\n";
    break;
    case 5:
        cout << "Friday\n";
    break;
    case 6:
        cout << "Saturday\n";
    break;
    case 7:
        cout << "Sunday\n";
    default:
        cout << "Day invalid\n";
        break;
    }

    return 0; // Return 0 to indicate successful program execution.
}
