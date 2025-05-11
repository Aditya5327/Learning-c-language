#include <stdio.h>

int sum(int a, int b) // with argument and with return value
{
    return a + b;
}

int star(int b) // with argument and without return value
{
    for (int i = 0; i < b; i++)
    {
        printf("%c", '*');
    }
    printf("\n");
}

int takenumber_with_return() // without argument and with return value
{
    int e;
    printf("Give me a number to print\n");
    scanf("%d", &e);
    return e;
}

int name() // without argument and without return value
{
    int e;
    printf("Aditya Jain\n");
}

int main()
{
    int a = 12, b = 5, c, d, f, g;
    c = sum(a, b);
    printf("The sum is %d\n", c);
    d = star(a);
    f = takenumber_with_return();
    printf("The number entered by you is %d\n", f);
    printf("My name is ");
    g = name();
    return 0;
}
