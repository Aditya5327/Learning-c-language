#include <stdio.h>

int main()
{
    int a = 32;
    int *ptr = &a;
    printf("%d\n", ptr);
    printf("%d\n", ptr + 2);
    printf("%d\n", *ptr);
    printf("%d\n", *(ptr - 2));

    int arr[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 9; i++)
    {
        printf("%d,", arr[i]);
        printf("%d,", *(arr + i));
        printf("%d,", &arr[i]);
        printf("%d\n", (arr + i));
    }
    return 0;
}