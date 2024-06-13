//Print Avg of 3
/*#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    printf("%c",a >= '0' && a <= '9');
    return 0;   
}*/

//Smalledst number of 2

#include<stdio.h>
int main()
{
    int a,b,Small;
    scanf("%d %d",&a,&b);

    Small = b > a ? a : b;
    printf("%d",Small);
    return 0;   
}