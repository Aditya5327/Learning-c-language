#include <stdio.h>

int main()
{
    int a = 3;
    float b = 54;
    float c = 34 / 5;
    float d = (float)34 / 5;
    printf("the value of a is %d\n", a);
    printf("the value of b is %d\n", b);
    printf("the value of b is %f\n", b);
    printf("the value of b is %d\n", (int)b);
    printf("the value of c is %d\n", c);
    printf("the value of c is %f\n", c);
    printf("the value of c is %d\n", (int)c);
    printf("the value of d is %f\n", d);
    return 0;
}
