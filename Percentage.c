#include<stdio.h>
#include<math.h>

int percent(int Mat, int Eng, int San)
{
    return ((Mat + Eng + San)/ 3);
}

int main()
{
    int Mat = 95;
    int Eng = 90;
    int San = 70;
    printf("Percent scored are : %d", percent(Mat, Eng, San));
    return 0;
}