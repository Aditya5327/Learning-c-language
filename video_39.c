#include <stdio.h>

int main()
{
    int a = 34;
    int *ptr; // it is a wild pointer
    ptr = &a; // the pointer is no longer a wild pointer.
    printf("The value of a is %d\n",*ptr);
    return 0;
}