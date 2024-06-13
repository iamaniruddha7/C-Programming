#include <stdio.h>

int StoreTable(int arr[][10], int n, int m, int number)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = number * (i + 1);
    }
}

int main()
{
    int table[2][10];
    StoreTable(table, 0,10,7);
    StoreTable(table, 1,10,8);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",table[0][i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",table[1][i]);
    }
    
    return 0;
}