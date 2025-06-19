#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    for (int i = 0; i < 3; i++)
    {
        int n;
        char *id;
        char temp[999];

        printf("Enter the number of characters in your employee id for e%d:\n", i + 1);
        scanf("%d", &n);
        getchar();

        id = (char *)malloc((n + 1) * sizeof(char));

        printf("Enter your employee id\n");
        fgets(temp, sizeof(temp), stdin); // use temp because if user enter more then n char in id then it will cause error so we create a temp inwhich we store the id and will copy its n char in id.
        strncpy(id, temp, n);
        id[n] = '\0'; //to make id a string we are adding a null char at its nth index. 

        printf("The employee id of e%d is %s and its location is %d\n", i + 1, id, &id);
        free(id);
    }

    return 0;
}