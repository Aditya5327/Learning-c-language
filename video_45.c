#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    char str1[50];
    char *str2 = "\nHello writing in a file.";

    // ***** Reading a file *****
    // ptr = fopen("video_45.txt", "r");
    // fscanf(ptr, "%s", str1);
    // printf("The content of this file is : %s\n", str1);

    //***** Writing a file ***** Delets the previous content, rewrites from starting.
    // ptr = fopen("video_45.txt", "w");
    // fprintf(ptr,"%s",str2);

    //***** Appending a file ***** Add content at the end of the written content without changing previous content.
    ptr = fopen("video_45.txt", "a");
    fprintf(ptr,"%s",str2);

    fclose(ptr);

    return 0;
}