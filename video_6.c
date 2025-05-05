#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    switch (age)
    {
    case 12:
        printf("Your age is 12");
        break;
    case 13:
        printf("Your age is 13");
        break;
    case 14:
        printf("Your age is 14");
        break;
    case 15:
        printf("Your age is 15");
        break;
    default:
        printf("Your age is not 12,13,14 and 15");
    }
}