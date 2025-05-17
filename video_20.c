#include <stdio.h>

int main()
{
    int output, stars;
    printf("Enter 0 for triangular star pattern and 1 for reversed star pattern.\n");
    scanf("%d", &output);

    if (output == 0)
    {
        printf("Enter the number of stars you want in your pattern.\n");
        scanf("%d", &stars);
        for (int i = 1; i <= stars; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%c", '*');
            }
            printf("\n");
        }
    }
    else if (output == 1)
    {
        printf("Enter the number of stars you want in your pattern.\n");
        scanf("%d", &stars);
        for (int i = stars; i > 0; i--)
        {
            for (int j = i; j > 0; j--)
            {
                printf("%c", '*');
            }
            printf("\n");
        }
    }
    else
    {
        printf("You entered a wrong choice.");
    }
    return 0;
}