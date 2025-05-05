#include <stdio.h>
#define PI 3.14

int main()
{
    int a = 4;
    const float b = 7.333;
    
    // b = 7.22; cannot do this because b is a constant.
    // PI = 4.45; cannot redefine it or cannot change its value.

    printf("%0.6f\n", b);
    printf("%10.6f\n", b);
    printf("%7.6f\n", b);
    printf("%9.2f this\n", b);
    printf("%-9.2f this\n", b);
    printf("value of a is:%d\n", a);
    printf("\a %f", PI);

    printf("\a \t%f", PI);
   
    return 0;
}