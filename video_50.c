#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc < 4 || argc > 4)
    {
        printf("Usage : %s operator num_1 num_2\n", argv[0]);
        return 0;
    }
    else if (strcmp(argv[1], "add") == 0)
    {
        printf("%d\n", atoi(argv[2]) + atoi(argv[3]));
    }
    else if (strcmp(argv[1], "subtract") == 0)
    {
        printf("%d\n", atoi(argv[2]) - atoi(argv[3]));
    }
    else if (strcmp(argv[1], "multiply") == 0)
    {
        printf("%d\n", atoi(argv[2]) * atoi(argv[3]));
    }
    else if (strcmp(argv[1], "divide") == 0)
    {
        printf("%d\n", atoi(argv[2]) / atoi(argv[3]));
    }
    else
    {
        printf("Enter a valid operator\n");
    }

    return 0;
}
