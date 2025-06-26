#include <stdio.h>

int is_palindrome(int n)
{
    int rev = 0, num = n;
    while (n != 0)
    {
        rev = n % 10 + rev * 10;
        n = n / 10;
    }

    if (num == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;

    printf("Enter a number to check whether the entered number is palindrome or not : \n");
    scanf("%d", &num);

    if (is_palindrome(num))
    {
        printf("%d is a palindrome\n", num);
    }
    else
    {
        printf("%d is not a palindrome\n", num);
    }

    return 0;
}