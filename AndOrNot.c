#include<stdio.h>
int main()
{
    printf("%d\n",4>3 && 2<3);
    printf("%d\n",4>3 && 2<1);
    printf("%d\n",4>3 || 2<3);
    printf("%d\n",3>4 || 2<1);
    printf("%d\n",!(4>3));
    printf("%d\n",!(2>3));
    return 0;
}