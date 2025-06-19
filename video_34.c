#include <stdio.h>

int func(int a, int b)
{
    extern int sum;
    return sum;
}

int sum = 343;

int func2()
{
    static int num;
    printf("The value of num is %d\n",num);
    num++;
}

int main()
{
    int sum = func(2, 4);
    printf("The value of sum is %d\n", sum);

    register int my_num = func2();
    my_num = func2();
    my_num = func2();
    my_num = func2();
    my_num = func2();
    return 0;
}