#include <stdio.h>

int main()
{
    int marks1[4] = {25, 26, 24, 24};
    int marks2[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks of student at indice %d\n", i);
        scanf("%d", &marks2[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The marks of student at indice %d is : %d and %d\n", i, marks1[i], marks2[i]);
    }


    
    return 0;
}
