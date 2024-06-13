#include<stdio.h>

int main()
{
    int marks[2][2];
    marks[0][0] = 11;
    marks[0][1] = 12;
    marks[1][0] = 13;
    marks[1][1] = 14;
    printf("%d\t",  marks[0][0]);
    printf("%d\n",  marks[0][1]);
    printf("%d\t",  marks[1][0]);
    printf("%d\n",  marks[1][1]);
    return 0;
}