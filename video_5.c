#include <stdio.h>

int main()
{
    int result;
    printf("If you passed Maths exam enter 1, if you passed Science exam enter 2 and if you passed both the exam enter 3\n");
    scanf("%d", &result);
    if (result == 1)
    {
        printf("Since you passed only maths exam you get a gift worth rupees 15");
    }
    else if (result == 2)
    {
        printf("Since you passed only science exam you get a gift worth rupees 15");
    }
    else
    {
        printf("Since you passed both maths and science exam you get a gift worth rupees 45");
    }
    return 0;
}