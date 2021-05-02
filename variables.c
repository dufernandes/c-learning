#include <stdio.h>

// Variable declaration - extern means the variable is declared and and can be used in multiple files. A nice explanation can be found here: https://stackoverflow.com/a/1433387/3498015:
extern int a, b;
extern int c;
extern float f;

int main()
{

    /* variable definition: */
    int a, b;
    float f;

    /* actual initialization */
    a = 10;
    b = 20;

    // variable can be declared and have a value assinged in the same expression
    int c = a + b;
    printf("value of c : %d \n", c);

    f = 70.0 / 3.0;
    printf("value of f : %f \n", f);

    return 0;
}