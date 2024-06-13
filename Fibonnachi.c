#include <stdio.h>
int fib(int n)
{
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
    int Fib1 = fib(n - 1);
    int Fib2 = fib(n - 2); // Fib of 1 to n
    int FibN = Fib1 + Fib2;
    //printf("Fibonacchi of %d is : %d\n", n, FibN);
    return FibN;
}
int main()
{
    printf("%d\n",fib(6));
    return 0;
}