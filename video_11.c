#include <stdio.h>

int main()
{
    int i, j, num;
    for (i = 0; i < 8; i++)
    {
        printf("%d", i);
        for (j = 0; j < 8; j++)
        {
            printf("enter the number,enter 0 to exist\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:
    return 0;
}
