#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    a <= 30 ? printf("Fail") : printf("Pass");
    if (a > 30)
    {
        printf("Pass");
    }
    else if (a == 30)
    {
        printf("Boundary Pass");
    }
    else if (a <= 30)
    {
        printf("Fail");
    }
    return 0;
}