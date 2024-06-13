#include<stdio.h>
int main()
{
    int num[5];
    int *ptr = &num[0];
    for(int i = 0; i < 5; i++)
    {
        printf("%d Index Value : ",i);
        scanf("%d",(ptr+i));
    }

    for(int i = 0; i < 5; i++)
    {
        printf("The values of array are : Index %d Value = %d\n",i, *(ptr+i));
    }

    return 0;
}