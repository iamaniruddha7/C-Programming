#include<stdio.h>
#include<string.h>
#include<stdlib.h>
    
int main()
{
    int *ptr; 
    ptr = (int*) calloc(5, sizeof(int));
    printf("\nEnter numbers(5): ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Numbers %d is: %d\n",i, ptr[i]);
    }
    printf("\n");
    return 0;
}