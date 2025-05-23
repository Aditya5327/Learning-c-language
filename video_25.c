#include <stdio.h>

int array_rev(int *arr, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + size - i - 1);
        *(arr + size - i - 1) = temp;
    }
    printf("The array after reversing all entries is : ");
    for (int i = 0; i < size; i++)
    {
        // printf("The element at index %d after reversal is %d\n",i,*(arr+i));
        printf("%d ",arr[i]);
    }
    
}

int main()
{
    int size;
    printf("Enter the size of array you want : ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element at index %d : ", i);
        scanf("%d", &array[i]);
    }
    printf("The array after entering all entries is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    array_rev(array, size);
    return 0;
}