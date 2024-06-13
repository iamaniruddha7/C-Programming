#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    printf("%d\n", *arr);
    printf("%d\n", *(arr+1));
    printf("%d\n", *(arr+2));
    printf("%d\n", *(arr+3));
    printf("%d\n", *(arr+4));
    printf("%d\n", *(arr+5)); // Garbage value as the array size is 5 ie. (0,1,2,3,4)- Index of the array 
    return 0;
}