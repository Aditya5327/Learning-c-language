#include <stdio.h>
#define DEBUG
#define PI 3.14
#undef PI
#define NUM 10

int main()
{
#ifdef DEBUG
    printf("Debug mode ON\n");
#endif

#ifndef VERSION
#define VERSION 1.0
#endif

#if NUM == 1
    printf("One\n");
#elif NUM == 5
    printf("Five\n");
#else
    printf("Other number\n");
#endif

    printf("File name is %s\n", __FILE__);
    printf("Today's date is %s\n",__DATE__);
    printf("Time is %s\n",__TIME__);
    printf("Line no. is %d\n",__LINE__);
    printf("ANSI : %d\n",__STDC__);

    return 0;
}