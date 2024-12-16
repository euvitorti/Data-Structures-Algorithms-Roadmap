#include <iostream>

using namespace std;

class Hello {

    // If this line is uncommented, the program will use 1 extra byte 
    // for this integer variable (int number = 10).
    // By default, the size of the object is determined by the sum 
    // of its member variables and alignment.

    public:
        Hello() {
            cout << "Object created" << endl;
        }
        ~Hello() {
            cout << "Object deleted" << endl;
        }
};

int main() {

    // Everything we declare in this function is stored in RAM, 
    // specifically in the stack memory (look up "heap" for comparison).
    
    Hello hello;

    // This outputs the size of the object `hello` in bytes.
    cout << sizeof(hello) << endl;

    return 0;
}
