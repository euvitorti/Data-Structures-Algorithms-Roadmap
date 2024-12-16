#include <iostream>

using namespace std;

class Hello {

    // This class contains three integer member variables:
    int firstNumber, secondNumber, thirdNumber;

    public:
        Hello() {
            cout << "Object created" << endl;
        }
        ~Hello() {
            cout << "Object deleted" << endl;
        }
};

int main() {

    // When the `new` operator is used, the object is created in heap memory. 
    // However, the pointer (or reference) to the object is stored in stack memory.

    Hello *firstHello = new Hello();

    // This object is fully stored in stack memory.
    Hello secondHello;

    // Prints the size of the pointer `firstHello` (typically 8 bytes on a 64-bit system).
    cout << sizeof(firstHello) << endl;

    // Prints the size of the `Hello` object, which is 12 bytes because the 
    // class has three integers (4 bytes each, assuming no padding or alignment issues).
    cout << sizeof(secondHello) << endl;

    // Deletes the object created in heap memory, freeing the allocated space.
    delete firstHello;

    return 0;
}
