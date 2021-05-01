#include <stdio.h>

// constants using the const keyword
const int LENGTH = 10;
const int WIDTH = 5;
const char NEWLINE = '\n';

int main()
{
    // calculate area using constants
    int area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    // use the NEWLINE constant for printing going to the next line
    printf("%c", NEWLINE);

    return 0;
}