#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int k=0;
    for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    {
        k += i;
        printf("%d\n",j);
    }
    printf("%d\n",k);
    // for (int i = n; i >= 1; i--)
    // {
    //     printf("%d\n",i);
    // }
    
    return 0;
    
}