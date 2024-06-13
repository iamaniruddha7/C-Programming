#include<stdio.h>

void Square(int n)
{
    n= n*n;
    printf("Answer = %d",n);
}
int main()
{
    int Value = 10;
    Square(Value);
    return 0;
}