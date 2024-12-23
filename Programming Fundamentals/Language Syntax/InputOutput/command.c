#include <stdio.h>  // Standard Input-Output header, provides functions like printf and scanf.

int main() {
    int year;  // Declares an integer variable to store the input year.

    printf("Enter year: ");  // Displays a prompt asking the user to input the year.

    // The scanf function reads the user input and stores it in the 'year' variable.
    // "%d" is a format specifier that indicates the input will be an integer.
    scanf("%d", &year);  // The '&' operator is used to pass the address of the 'year' variable to scanf.

    // Displays the value of 'year' after the user has input it.
    // The '%d' format specifier is used to print an integer.
    printf("CFB Cursos: %d\n", year);  // Outputs the stored value of 'year' with a message.

    return 0;  // Exits the main function, signaling successful execution.
}
