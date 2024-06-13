#include <stdio.h>
int main()
{
    float cost[3] = {100,200,300};
    float WithGST1 = cost[0] +(cost[0] * 0.18);
    float WithGST2 = cost[1] +(cost[1] * 0.18);
    float WithGST3 = cost[2] +(cost[2] * 0.18);
    printf("%f\n%f\n%f\n", WithGST1, WithGST2, WithGST3);
    return 0;
}