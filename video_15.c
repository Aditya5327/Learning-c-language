#include <stdio.h>

int select_conversion()
{
    int option;
    printf("for conversion of kilometers into miles enter : 1 \nfor conversion of inches into foot enter : 2 \nfor conversion of centimeters into inches enter : 3 \nfor conversion of pounds into kilograms enter : 4 \nfor conversion of inches into meter enter : 5\n");
    scanf("%d", &option);
    return option;
}

int confirm_conversion(int print)
{
    float num;
    if (print == 1)
    {
        printf("You selected conversion of kilometers into miles\n");
        printf("Enter kilometers:\n");
        scanf("%f", &num);
        printf("%f kilometers is equal to %f miles\n", num, num * 0.621);
    }
    else if (print == 2)
    {
        printf("You selected conversion of inches into foot\n");
        printf("Enter inches:\n");
        scanf("%f", &num);
        printf("%f inches is equal to %f foot\n", num, num * 0.0833);
    }
    else if (print == 3)
    {
        printf("You selected conversion of centimeters into inches\n");
        printf("Enter centimeters:\n");
        scanf("%f", &num);
        printf("%f centimeters is equal to %f inches\n", num, num * 0.394);
    }
    else if (print == 4)
    {
        printf("You selected conversion of pounds into kilograms\n");
        printf("Enter pounds:\n");
        scanf("%f", &num);
        printf("%f pounds is equal to %f kilograms\n", num, num * 0.453592);
    }
    else if (print == 5)
    {
        printf("You selected conversion of inches into meters\n");
        printf("Enter inches:\n");
        scanf("%f", &num);
        printf("%f inches is equal to %f meter\n", num, num * 0.0254);
    }
    else
    {
        printf("You entered wrong number\n");
    }
}

int main()
{
    int print, confirm , conti;
    start:
    print = select_conversion();
    confirm = confirm_conversion(print);
    printf("Enter 1 to continue conversion\nEnter 0 to stop conversion\n");
    scanf("%d",&conti);
    if(conti==1){
        goto start;
    }
    else{
        goto end;
    }
    end:
    return 0;
}
