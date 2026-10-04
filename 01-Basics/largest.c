#include <stdio.h>

int largest(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int result;

    result = largest(10, 20);

    printf("Largest = %d\n", result);

    return 0;
}