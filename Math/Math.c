#include <stdio.h>

int result;

// function a+b with return result
int mathadd(int a, int b)
{
    return a + b;
}

// function a-b with return result
int mathsub(int a, int b)
{
    return a - b;
}

// function a*b with return result
int mathmul(int a, int b)
{
    return a * b;
}

// function a/b with return result
int mathdiv(int a, int b)
{
    return a / b;
}

int main()
{
    printf("%d\n", mathadd(1, 1));
    printf("%d\n", mathsub(10, 5));
    printf("%d\n", mathmul(5, 5));
    printf("%d\n", mathdiv(100, 10));
    return 0;
}