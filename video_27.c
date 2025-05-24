#include <stdio.h>

typedef struct student
{
    int id;
    int marks;
    char fav_char;
} std;

int main()
{
    std aditya = {3, 28, 'a'};
    printf("%d,%d,%c\n", aditya);
    typedef int i;
    i x = 10;
    i y = 20;
    printf("The sum of x amd y is : %d", x + y);
    return 0;
}