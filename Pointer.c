#include <stdio.h>

int main()
{
    int age1 = 22;
    int *ptr = &age1;
    int age2 = *ptr;
    printf("%d", age2);
    return 0;
}