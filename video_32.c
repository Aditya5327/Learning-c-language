#include <stdio.h>
#include <stdlib.h>

int main()
{
    // trying to allocate memory without using functions, with vla method but it is not a dma, reason written in notebook.

    // int n;
    // printf("Enter the size of array u want : ");
    // scanf("%d", &n);
    // int array[n];
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value of element at %d\n", i);
    //     scanf("%d", &array[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at %d is %d\n", i, array[i]);
    // }
    // int opt;
    // printf("Did u want to resize array,enter 1 for resizing and 0 for ending : \n");
    // scanf("%d", &opt);
    // if (opt == 1)
    // {
    //     int n1;
    //     printf("Enter the size of array u want : ");
    //     scanf("%d", &n1);
    //     int array1[n1];
    //     for (int i = 0; i < n; i++)
    //     {
    //         array1[i] = array[i];
    //     }

    //     for (int i = n; i < n1; i++)
    //     {
    //         printf("Enter the value of element at %d\n", i);
    //         scanf("%d", &array1[i]);
    //     }
    //     for (int i = 0; i < n1; i++)
    //     {
    //         printf("The value at %d is %d\n", i, array1[i]);
    //     }
    // }

    // use of malloc

    // int *ptr;
    // int n;
    // printf("Enter the size of the array you want to create : \n");
    // scanf("%d", &n);
    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value of element at %d : \n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at %d is %d\n", i, ptr[i]);
    // }

    // use of calloc

    // int *ptr;
    // int n;
    // printf("Enter the size of the array you want to create : \n");
    // scanf("%d", &n);

    // ptr = (int *)calloc(n, sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value of element at %d : \n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at %d is %d\n", i, ptr[i]);
    // }

    // // use of realloc

    // int n1;
    // printf("Enter the size of new array you want to create : \n");
    // scanf("%d", &n1);

    // ptr = (int *)realloc(ptr, n * sizeof(int));
    // for (int i = n; i < n1; i++)
    // {
    //     printf("Enter the value of element at %d : \n", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < n1; i++)
    // {
    //     printf("The value at %d is %d\n", i, ptr[i]);
    // }

    // // use of free

    // free(ptr);


    // Exercise given by sir to use free between code, after using free and reallocating the memory to another pointer the address can be same or cannot be.

    int *pointer;
    int n, i;


    printf("Enter the size you want to create an array \n");
    scanf("%d", &n);

    pointer = (int *)malloc(n * sizeof(int));

    // user input
    for (i = 0; i < n; i++)
    {
        printf("Enter the values stored in %d \n", i);
        scanf("%d", &pointer[i]);
    }


    // printing values with address
    for (i = 0; i < n; i++)
    {
        printf("the values stored in %d is %d  an the address is %d  \n", i, pointer[i], &pointer[i]);
    }



    // free assigned pointer
    free(pointer);



    // assigning memory to new pointer
    char *new;


    printf("Enter the size you want to create an new character array \n");
    scanf("%d", &n);

    new = (char *)malloc(n * sizeof(char));

    // user input
    for (i = 0; i < n; i++)
    {
        printf("Enter the new values stored in %d \n", i);
        scanf("%s", &new[i]);
    }

    // printing values with address
    for (i = 0; i < n; i++)
    {
        printf("the values new stored in %d is %c and the address is %d  \n", i, new[i], &new[i]);
    }
    return 0;
}