#include <stdio.h>

int main(){

    int year;

    printf("Enter year: "); // Displays a message asking the user to enter a year.
    scanf("%d", &year); // Reads the user's input and stores it in the variable 'year'. The format specifier %d indicates that the entered value will be an integer.

    printf("CFB Cursos: %d\n", year); // Displays the value of 'year', using the format specifier %d to print an integer value.

    return 0;
}