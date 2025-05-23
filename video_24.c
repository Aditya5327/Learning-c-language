#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "aditya ";
    char s2[] = "jain";
    char s3[20];
    printf("The length of string 1 is %d\n",strlen(s1));
    printf("%d\n",strcmp(s1,s2));
    puts(strcat(s1,s2));
    puts(strcpy(s3,strrev(s2)));
    puts(strrev(s2));

    char name1[20], name2[20];
    printf("Enter two persons name:\n");
    gets(name1);
    gets(name2);
    puts(strcat(strcat(name1," is a friend of "),name2));

    return 0;
}