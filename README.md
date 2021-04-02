# c-learning

I haven't worked with C for more than a decade. It is a language I always would liked have developed professionally, but destiny has taken me in other directions. 

Now, I decided to revisit C, and here is, if you will, my notes about the it. The idea is not to provide a comprehensive material of the language, but instead to have some notes while I revise it. Hopefully, this material will be useful for someone else.

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

The file [sizeof.c](./sizeof.c), when executed shows the size in byte of various C primitive, as well as important constants holding minimum and maximum values for each primitive.

# References

- C programming tutorial - https://linuxconfig.org/c-programming-tutorial
- Learn C programming, simply easy learning - https://www.tutorialspoint.com/cprogramming/index.htm
- Difference between #define and const - https://stackoverflow.com/questions/6442328/what-is-the-difference-between-define-and-const/6442420#:~:text=The%20difference%20is%20that%20%23define,well%20not%20really%20that%20variable).

