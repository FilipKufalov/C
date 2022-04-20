#include <stdio.h>

int result;

// function a+b with return result
int add(int a, int b)
{
    return a + b;
}

// assembly function addl a +b
int add_asm(int a, int b)
{
    __asm__(
        "addl %1, %0\n\t"
        : "=r"(result)
        : "r"(a), "0"(b));
    return result;
}

// assembly substraction function a - b
int sub_asm(int a, int b)
{
    __asm__(
        "subl %1, %0\n\t"
        : "=r"(result)
        : "r"(a), "0"(b));
    return result;
}

int main()
{
    printf("%d\n", add_asm(2, 1));
    printf("%d\n", sub_asm(2, 4));
    return 0;
}