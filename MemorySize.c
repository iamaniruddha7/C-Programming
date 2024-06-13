#include<stdio.h>
#include<string.h>
#include<stdlib.h>
    
int main()
{
    int *ptr; 
    int n;
    printf("Enter n: ") ; 
    scanf("%d",&n);

    ptr = (int*) calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("%d\t",ptr[i]);
    }

    free(ptr);

    printf("\n");

    ptr = (int*) calloc(2, sizeof(int));

    for (int i = 0; i < 2; i++)
    {
        printf("%d\t",ptr[i]);
    }
    
    return 0;
}