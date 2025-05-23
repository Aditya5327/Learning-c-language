#include <stdio.h>

int main()
{
    char str2[] = "Aditya";
    char str3[] = {'a','d','i',' ','t','y','\0'};
    char str4[8] = "aditya.";
    char str1[20];
    gets(str1);
    puts(str1);
    puts(str2);
    puts(str3);
    printf("%c",str4);
    return 0;
}