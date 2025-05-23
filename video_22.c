#include <stdio.h>

int func1(int array[])
{
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        sum = sum + array[i];
    }
    return sum / 9;
}

int func2(int *array)
{
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        sum = sum + *(array + i);
    }
    return sum / 9;
}

int func3(int array[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Element at (%d,%d) is %d\n", i, j, array[i][j]);
        }
    }
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int av1 = func1(arr);
    printf("%d\n", av1);
    int av2 = func2(arr);
    printf("%d\n", av2);

    int arr2[2][2] = {{1, 2}, {3, 4}};
    func3(arr2);
    return 0;
}