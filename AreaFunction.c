#include<stdio.h>

float AreaSquare(float a, float b)
{
    return a * b;
}

int main()
{
    float a = 3;
    float b = 10;
    printf("Area: %f", AreaSquare(a, b));
    return 0;
}