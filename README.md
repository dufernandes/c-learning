# C Learning notes

I haven't worked with C for more than a decade. It is a language I always would liked have developed professionally, but destiny has taken me in other directions. 

Now, I decided to revisit C, and here is, if you will, my notes about the it. The idea is not to provide a comprehensive material of the language, but instead to have some notes while I revise it. Hopefully, this material will be useful for someone else.

- [C Learning notes](#c-learning-notes)
- [Learning and coding](#learning-and-coding)
  - [Compiling and running the code](#compiling-and-running-the-code)
  - [Hello World](#hello-world)
  - [SizeOf](#sizeof)
  - [Defining constants](#defining-constants)
    - [Difference between #define and const](#difference-between-define-and-const)
- [References](#references)

# Learning and coding

Firstly, simple instructions on how to compile and each source-code file is given. Afterwards, each file is briefly described, and within it a theme for the language is exercised.

## Compiling and running the code

In order to compile the code, execute:

```
gcc -o toBeExecuted.out toBeExecuted.c
```

The file `toBeExecuted.c` is the source-file holding the C code, and `toBeExecuted.out` is the file to be executed. To run it, simple execute:

```
./toBeExecuted.out
```

Each topic below is the execution of a certain file with things to learn for C programming.

## Hello World

The first file, [hello.c](./hello.c) is the simples "Hello World" possible, thus no explanation is needed.

```c
#include <stdio.h>

int main()
{
    /* Here is my comment */
    printf("Hellow, World!\n");
    return 0;
}

```

To compile it, execute: `gcc -o hello.out hello.c`, and to run: `./hello`. Note that this follows the explanation in the session [Compiling and running the code](#compiling-and-running-the-code)

## SizeOf

The file [sizeof.c](./sizeof.c), when executed shows the size in byte of various C primitives, as well as important constants holding minimum and maximum values for each primitive. Check it out:

```c
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
```

## Defining constants

There are two ways of defining constants, either use the `#include` keyword, or the `const` one. The file [constants_using_define.c](./constants_using_define.c) shows how to the `#define` element, and the file: [constants_using_const.c](./constants_using_const.c) shows the usage of `const`.

Here is the example using `#define`:

```c
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
```

And here is the example using `const`:

```c
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
```

### Difference between #define and const

Here is a nice explanation taken from [stackoverflow](https://stackoverflow.com/questions/6442328/what-is-the-difference-between-define-and-const#:~:text=The%20difference%20is%20that%20%23define,well%20not%20really%20that%20variable).):

>The difference is that #define is processed by the preprocessor doing what amounts to simple text replacement. Const values defined like this are not visible for the actual compiler, while a variable defined with the const modifier is an actual typed "variable" (well not really that variable). The disadvantage of #define is that is replaces every occurence of the name, while const variables get normal lookup, so you have less risk of naming conflicts and it's not typesafe.
>The advantage of #define is that it guarantees constness and therefore there will be no backing variable. Const Variables may or may not be substituted into the code, so #define might be faster in some situations. However a good compiler should inline those consts anyways and it's unlikely to make much of a difference in most situations, so I would keep using const unless you have a piece of code where you have seen that the compiler hasn't inlined the variable and it is very, very performance critical code.

# References

- C programming tutorial - https://linuxconfig.org/c-programming-tutorial
- Learn C programming, simply easy learning - https://www.tutorialspoint.com/cprogramming/index.htm
- Difference between #define and const - https://stackoverflow.com/questions/6442328/what-is-the-difference-between-define-and-const#:~:text=The%20difference%20is%20that%20%23define,well%20not%20really%20that%20variable).

