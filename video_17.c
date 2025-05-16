#include <stdio.h>

int fibbonaci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibbonaci(n - 1) + fibbonaci(n-2);
    }
}

int main()
{
    int first = 0, second = 1, next;
    printf("0,1,");
    for(int i = 0 ; i < 40 ; i++)
    {
        next = first + second;
        first = second;
        second = next ;
        printf("%d,",next);
    }


    for( int i = 0 ; i < 42 ; i++)
    {
        int result = fibbonaci(i);
        printf("%d,", result);
    }

    return 0;
}
