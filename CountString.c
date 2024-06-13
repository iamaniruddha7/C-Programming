#include<stdio.h>
#include<string.h>
// int countstring(char arr[])
// {
//     int count = 0;
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count - 1;
    
// }
int main()
{
    char name[] = "Aniruddha";
    // fgets(name, 100, stdin);
    // printf("%d", countstring(name));
    printf("%d", strlen(name));
    return 0;
}