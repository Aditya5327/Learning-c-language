#include <stdio.h>

int main()
{
    printf("Hello world\n");
    int i, age;
    for (i = 0; i < 5; i++)
    {
        printf("%d\nEnter your age:\n", i);
        scanf("%d", &age);
        if (age == 10)
        {
            break;
        }
        if (age > 10)
        {
            continue;
        }
        printf("Hello\n");
        printf("Hello\n");
        printf("Hello\n");
        printf("Hello\n");
        printf("Hello\n");
    }

    return 0;
}
