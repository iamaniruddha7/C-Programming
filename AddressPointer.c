#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    
    printf("%d\n", age);

    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u", &ptr);

    // printf("%p\n", &age);
    // printf("%p\n", ptr);
    // printf("%p", &ptr);

    return 0;
}