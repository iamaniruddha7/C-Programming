#include<stdio.h>

void table(int n)//function name table and passed an parameter n
{
   for (int i = 1; i <= 10; i++)
   {
     printf("%d\n", i*n);
   }
}

int main()
{
    int n;
    scanf("%d", &n);
    table(n);// n is the argument ie. actual parameter [This is where we are calling the function]
    return 0;
}