#include <stdio.h>
#include <math.h>

float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

float area(int x1, int y1, int x2, int y2, float (*operation)(int, int, int, int))
{
    return (3.14 * pow(operation(x1, y1, x2, y2), 2));
}

int main()
{
    int x1, y1, x2, y2;
    printf("Give us the co-ordinate of two points to calculate the area of circle whose radius is the distance between the points given.\n");

    printf("Enter the x co-ordinate of first point : ");
    scanf("%d", &x1);

    printf("Enter the y co-ordinate of first point : ");
    scanf("%d", &y1);

    printf("Enter the x co-ordinate of second point : ");
    scanf("%d", &x2);

    printf("Enter the y co-ordinate of second point : ");
    scanf("%d", &y2);

    float val = area(x1, y1, x2, y2, distance);
    printf("The answer is : %0.4f\n", val);

    return 0;
}