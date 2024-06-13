#include <stdio.h>
float CelToFar(float cel)
{
    float far = (cel * 1.8) + 32;
    return far;
}
int main()
{
    float far = CelToFar(40);
    printf("Far : %f", far);
    return 0;
}