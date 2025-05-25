#include <stdio.h>
#include <string.h>

union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    union student aditya;

    aditya.fav_char = 'A';
    strcpy(aditya.name,"Aditya");
    aditya.id = 1;
    aditya.marks = 30;
    
    printf("The id is %d\n",aditya.id);
    printf("The marks are %d\n",aditya.marks);
    printf("The fav_char is %c\n",aditya.fav_char);
    printf("The name is %s\n",aditya.name);
    return 0;
}