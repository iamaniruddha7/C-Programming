#include<stdio.h>
// (i++) -> Post Increment Operator
// (++i) -> Pre Increment Operator 
// (i--) -> Post Decrement Operator
// (--i) -> Pre Decrement Operator 

int main()
{
    for(int i = 0; i <=10;++i)
   {
     printf("%d\n",i);
   }

    for(int i = 10; i >=0;--i)
   {
     printf("%d\n",i);
   }

   for(int i = 1; i <=1; i = i + 1)
   {
     printf("My name is Aniruddha\n");
     printf("And I'm not a terrorist\n");
   }
   return 0;
}