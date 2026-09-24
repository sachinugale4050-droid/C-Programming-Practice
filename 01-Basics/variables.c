#include <stdio.h>

int main()
{
    int age = 20;
    float marks = 85.5;
    char grade = 'A';
    double percentage = 85.5678;

    printf("Age = %d\n", age);
    printf("Marks = %.1f\n", marks);
    printf("Grade = %c\n", grade);
    printf("Percentage = %.4lf\n", percentage);

    return 0;
}