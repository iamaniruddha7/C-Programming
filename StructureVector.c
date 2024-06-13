#include <stdio.h>
#include <string.h>

struct Vector
{
    int x;
    int y;
};

void calculate(struct Vector v1, struct Vector v2, struct Vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("Sum of x is: %d\n", sum.x);
    printf("Sum of y is: %d\n\n", sum.y);
};

int main()
{
    struct Vector v1 = {10, 5};
    struct Vector v2 = {2, 3};
    struct Vector sum = {0};
    calculate(v1, v2, sum);
    return 0;
}