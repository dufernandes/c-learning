#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() 
{
    printf("Storage size for int types:\n");
    printf("Storage size for char : %ld \n", sizeof(char));
    printf("Storage size for unsigned char	 : %ld \n", sizeof(unsigned char));
    printf("Storage size for signed char	 : %ld \n", sizeof(signed char));
    printf("Storage size for int : %ld \n", sizeof(int));
    printf("Storage size for unsigned int : %ld \n", sizeof(unsigned int));
    printf("Storage size for short : %ld \n", sizeof(short));
    printf("Storage size for unsigned short : %ld \n", sizeof(unsigned short));
    printf("Storage size for long : %ld \n", sizeof(long));
    printf("Storage size for unsigned long : %ld \n", sizeof(unsigned long));

    printf("\nMax and min sizes for integer types:\n");
    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

    printf("\nStorage size for floating points:\n");
    printf("Storage size for float : %ld \n", sizeof(float));
    printf("Storage size for double : %ld \n", sizeof(double));

    printf("Max and min sizes for float and doubles:\n");
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );
}