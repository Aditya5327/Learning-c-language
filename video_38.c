#include <stdio.h>
#include <stdlib.h>

int functionDangling()
{
    int a = 34;
    int b = 345;
    int sum = a + b;
    return &sum;
}

int main()
{
    // case 1 : Deallocation of memory block
    int *ptr1 = (int *)malloc(7 * sizeof(int));
    ptr1[0] = 12;
    ptr1[1] = 23;
    ptr1[3] = 34;
    ptr1[4] = 45;
    free(ptr1); // ptr is now a dangling pointer

    // case 2 : function returning local variable
    int *ptr2 = functionDangling();

    // case 3 : if a variable goes out of scope
    int *ptr3;
    {
        int i = 10;
        ptr3 = &i;
    }

    return 0;
}