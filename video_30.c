#include <stdio.h>

int func()
{
    static int a = 0;
    printf("The value of a is %d\n", a);
    a++;
}

int main()
{
    int var = func();
    var = func();
    var = func();
    var = func();
    var = func();
    var = func();
    return 0;
}