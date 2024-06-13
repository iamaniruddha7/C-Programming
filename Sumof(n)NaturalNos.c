#include <stdio.h>
int sum(int n)
{
    if (n == 1) //Never forget base case, your code can crash
    {
        return 1;
    }
    int SumNm1 = sum(n - 1); // sum of 1 to n
    int SumN = SumNm1 + n;
    return SumN;
}
int main()
{
    printf("Sum is : %d", sum(10));
    return 0;
}