#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;

    if (n < 0)
        return -1; // Error case for negative input

    if (n <= 2)
        return n;

    return n * factorial(n - 1);
}

int main()
{
    int n = 4;

    int result = factorial(n);

    printf("Factorial of %d is %d\n", n, result);

    return 0;
}
