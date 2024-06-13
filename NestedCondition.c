#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   if (a>18)
   {
      printf("Major");
   }
   else if (a == 18)
   {
      printf("On the verge");
   }
   else if (a < 18)
   {
      printf("Minor");
   }
   
   else
   {
      printf("Not even born");
   }
}