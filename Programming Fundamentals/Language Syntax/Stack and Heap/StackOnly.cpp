#include <iostream> // Standard library for input/output operations.

using namespace std;

class Hello {
    // This class contains three integer member variables.
    // Member variables typically contribute to the size of an object.
    int firstNumber, secondNumber, thirdNumber;

public:
    Hello() {
        cout << "Object created" << endl; // Constructor message when an object is created.
    }
    ~Hello() {
        cout << "Object deleted" << endl; // Destructor message when an object is destroyed.
    }
};

int main() {
    // When the `new` operator is used, the object is created in **heap memory**.
    // The pointer (or reference to the object) is stored in **stack memory**.
    Hello* firstHello = new Hello(); // `firstHello` is a pointer on the stack pointing to a heap object.

    // This object is fully stored in **stack memory**.
    Hello secondHello; // `secondHello` is an automatic variable on the stack.

    // Prints the size of the pointer `firstHello`.
    // The size of a pointer is typically 8 bytes on a 64-bit system (stack allocation).
    cout << sizeof(firstHello) << endl;

    // Prints the size of the `Hello` object.
    // Size is 12 bytes (assuming 4 bytes per integer and no alignment/padding).
    cout << sizeof(secondHello) << endl;

    // Deletes the object created in heap memory, freeing the allocated space.
    delete firstHello;

    return 0;
}
