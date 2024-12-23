#include <iostream> // Standard library for input/output operations.

using namespace std;

class Hello {
    // If this line is uncommented, an extra byte will be used for the integer variable.
    // int number = 10; 

public:
    Hello() {
        cout << "Object created" << endl; // Constructor message when an object is created.
    }
    ~Hello() {
        cout << "Object deleted" << endl; // Destructor message when an object is destroyed.
    }
};

int main() {
    // Everything declared here is stored in RAM, specifically in the **stack memory**.
    Hello hello; // Object `hello` is stored entirely on the stack.

    // Outputs the size of the object `hello` in bytes.
    // The size depends on the member variables in the class.
    cout << sizeof(hello) << endl;

    return 0;
}
