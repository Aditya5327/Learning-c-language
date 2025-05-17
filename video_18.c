#include <stdio.h>

int main()
{
    int a = 76;
    int *ptr = &a;
    printf("The address of pointer to a is %p\n",&ptr);
    printf("The address of a is %p\n",&a);
    printf("The address of a is %p\n",ptr);
    printf("The value of a is %d\n",*ptr);
    printf("The value of a is %d\n",a);
    
    int *ptr2 = NULL;
    printf("The address of some garbage is %p",ptr2);
    return 0 ;
}
