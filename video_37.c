#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = NULL;
    if (ptr != NULL)
    {
        printf("The value at ptr is %d", *ptr);
    }
    else
    {
        printf("The pointer is a null pointer hence cannot be dereferenced.");
    }
    return 0;
}