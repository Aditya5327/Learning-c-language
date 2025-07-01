#include <stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int divide(int a, int b)
{
    return a / b;
}

void compute(int x, int y, int (*operation)(int, int))
{
    printf("Result: %d\n", operation(x, y)); // we can also write (*operation)(x,y)
}

int main()
{
    compute(4, 5, multiply); // &multiply will also be correct
    compute(4, 5, divide);
    compute(4, 5, subtract);
    compute(4, 5, &add);
    return 0;
}

// question given by sir

// int avg(int x, int y)
// {
//     return (x + y) / 2;
// }

// void greetGe(int x, int y, int (*op)(int, int))
// {
//     printf("Good evening user\n");
//     printf("The average is %d\n",op(x,y));
// }

// void greetGa(int x, int y, int (*op)(int, int))
// {
//     printf("Good afternoon user\n");
//     printf("The average is %d\n",op(x,y));
// }

// int main()
// {
//     int x, y;
//     printf("Enter two numbers to find average of them : \n");
//     scanf("%d%d", &x, &y);

//     greetGa(x, y, avg);
//     greetGe(x, y, avg);

//     return 0;
// }
