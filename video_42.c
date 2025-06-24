#include <stdio.h>
#include "video_41.c"
#define PI 3.14
#define SQUARE(x) x *x

int main()
{
    int hello = main2();
    float area = PI * SQUARE(radius);
    printf("%d\n", hello);
    printf("The random number is %d\n", random);
    printf("The area of circle of radius 3 is %f\n", area);
    return 0;
}