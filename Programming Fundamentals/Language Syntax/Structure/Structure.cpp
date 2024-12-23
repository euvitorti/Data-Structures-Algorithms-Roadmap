// USE (#include) TO ADD LIBRARIES
#include <iostream> // Standard library for input and output (cin, cout, etc.)

using namespace std; // Avoids the need to prefix elements from the std namespace (e.g., std::cout).

int main() { // Main function, the program's entry point.
    
    // (endl OR \n) IS USED FOR LINE BREAKS
    cout << "Hello World!\nCFB CURSOS" << endl; 
    // 'cout' is used to display output to the console.
    // '\n' is a newline character.
    // 'endl' also indicates a new line and flushes the output buffer.

    system("pause"); // Pauses program execution and waits for user interaction. 
                     // Specific to Windows systems and generally not recommended for cross-platform code.
                     
    return 0; // Returns 0, indicating the program executed successfully.
}
