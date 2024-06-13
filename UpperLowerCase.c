#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower Case");
    }

    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper Case");
    }

    else
    {
        printf("Incorrect Input");
    }
    return 0;
}