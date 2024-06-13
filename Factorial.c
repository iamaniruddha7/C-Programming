#include <stdio.h>
int fact(int n)
{
    if (n == 0) //Never forget base case, your code can crash
    {
        return 1;
    }
    int FactNm1 = fact(n - 1); // Fact of 1 to n
    int FactN = FactNm1 * n;
    return FactN;
}
int main()
{
    printf("Fact is : %d", fact(5));
    return 0;
}