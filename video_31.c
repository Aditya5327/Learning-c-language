#include <stdio.h>

typedef struct driver_details
{
    char name[50];
    int dl_no;
    char route[100];
    int kms_travelled;
} detail;

int main()
{
    int n;
    printf("Enter the number of drivers in your agency : ");
    scanf("%d", &n);
    getchar();

    detail driver[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details for driver %d\n", (i + 1));

        printf("Name : ");
        fgets(driver[i].name, sizeof(driver[i].name), stdin);
        
        printf("Driving license no : ");
        scanf("%d", &driver[i].dl_no);
        getchar();

        printf("Route you travell : ");
        fgets(driver[i].route, sizeof(driver[i].route), stdin);

        printf("Kms till travelled : ");
        scanf("%d",&driver[i].kms_travelled);
        getchar();
    }

    for (int i = 0; i <n; i++)
    {
        printf("The name of driver %d is %s, his driving lisence number is %d, his travelling route is %s and till now he travelled %d killometers\n",(i+1),driver[i].name,driver[i].dl_no,driver[i].route,driver[i].kms_travelled);
    }
    

    return 0;
}