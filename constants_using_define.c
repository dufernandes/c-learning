#include <stdio.h>

// constants using the #define keyword
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
    // calculate area using constants
    int area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    // use the NEWLINE constant for printing going to the next line
    printf("%c", NEWLINE);

    return 0;
}