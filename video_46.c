#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("video_46.txt", "a+");
    char c = fgetc(ptr);
    printf("The character in file is %c\n", c);
    c = fgetc(ptr);
    printf("The character in file is %c\n", c);

    char str[34];
    fgets(str, 33, ptr);
    printf("The string is %s\n", str);

    fputc('o',ptr);
    fputs("this is a string",ptr);

    fclose(ptr);
    return 0;
}