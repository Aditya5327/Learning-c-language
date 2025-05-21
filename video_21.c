#include <stdio.h>

int value(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int refrence(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int quiz(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y - *y;
}

int main()
{
    int a = 34, b = 74;
    printf("%d and %d\n", a, b);
    value(a, b);
    printf("%d and %d\n", a, b);
    refrence(&a, &b);
    printf("%d and %d\n", a, b);
    int c = 4, d = 3;
    printf("%d and %d\n", c, d);
    quiz(&c, &d);
    printf("%d and %d\n", c, d);
    return 0;
}