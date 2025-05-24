#include <stdio.h>

struct student
{
    int id;
    int marks;
    char fav_char;
};

int main()
{
    struct student harry, ravi, aditya;
    harry.id = 1;
    ravi.id = 2;
    aditya.id = 3;
    harry.marks = 30;
    ravi.marks = 20;
    aditya.marks = 28;
    harry.fav_char = 'h';
    ravi.fav_char = 'r';
    aditya.fav_char = 'a';
    printf("The id of Aditya is %d , his marks are %d and his favourite character is %c\n",aditya.id,aditya.marks,aditya.fav_char);
    printf("%d,%d,%c",aditya);
    return 0;
}