#include <stdio.h>
#include <string.h>

// in this exercise i created two file
//  one for saving template 
// second for saving data of customers.

int main()
{
    FILE *ptr1 = NULL;
    FILE *ptr2 = NULL;
    ptr1 = fopen("video_47_1.txt", "r");
    char str[100];
    // fgets(str,99,ptr);
    // printf("%s\n",str);
    // fgets(str,99,ptr);
    // printf("%s\n",str);
    // fgets(str,99,ptr);
    // printf("%s\n",str);
    while ((fgets(str, sizeof(str), ptr1)) != NULL)
    {
        printf("%s", str);
    }

    printf("\n");

    fclose(ptr1);

    char name[50], item[50], outlet[50];

    printf("Input name : ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Input item : ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("Input outlet : ");
    fgets(outlet, sizeof(outlet), stdin);
    outlet[strlen(outlet) - 1] = '\0';

    ptr2 = fopen("video_47_2.txt", "a+");

    fprintf(ptr2, "Thanks %s for purchasing %s from %s.\n", name, item, outlet);
    fprintf(ptr2, "Please visit %s for any kind of problem.\n", outlet);
    fprintf(ptr2, "We plan to serve you again.\n");

    rewind(ptr2);
    while ((fgets(str, sizeof(str), ptr2)) != NULL)
    {
        printf("%s", str);
    }

    fclose(ptr2);
    return 0;
}