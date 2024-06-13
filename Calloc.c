#include<stdio.h>
#include<string.h>
#include<stdlib.h>
    
int main()
{
    int *ptr;
    ptr = (float*) calloc( 5, sizeof(float));

    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }
    return 0;
}