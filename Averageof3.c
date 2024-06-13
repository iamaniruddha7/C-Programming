//Print Avg of 3

#include<stdio.h>
int main()
{
    float a,b,c,Avg;
    scanf("%f\n %f\n %f", &a, &b, &c);
    Avg = (a+b+c)/3.0;
    printf("%.2f",Avg);
    return 0;
}