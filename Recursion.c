#include<stdio.h>

void printHW(int count)
{
    if (count==0)
    {
        return;
    }

   printf("Peaky Blinders\n");
   printHW(count-1);
}

int main()
{
    printHW(5);
    return 0;
}