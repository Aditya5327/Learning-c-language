#include <stdio.h>

int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else if (num < 0)
    {
        return 0;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}

int main()
{
    int num, result;
    printf("Enter the number you want the factorial of :\n");
    scanf("%d", &num);
    result = factorial(num);
    printf("The factorial of %d is %d\n", num, result);
    return 0;
}
