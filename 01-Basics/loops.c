#include <stdio.h>

int main()
{
    int i;

    printf("For loop:\n");

    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    printf("While loop:\n");

    i = 1;

    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }

    printf("Do-while loop:\n");

    i = 1;

    do
    {
        printf("%d\n", i);
        i++;
    }
    while (i <= 5);

    return 0;
}