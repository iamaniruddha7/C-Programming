#include <stdio.h>

void Swap(int a, int b)
{
    int s = a;
    a = b;
    b = s;
    printf("a = %d\n & b =%d", a, b);
}
int main()
{
    int x = 2;
    int y = 8;
    Swap(x,y);
    return 0;
}
