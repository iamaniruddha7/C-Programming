#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[100];
    int roll;
    float cgpa;
} stu;


int main()
{
    stu s1 = {"Bhushan", 134, 8.2};
    printf("%s\n%d\n%f\n\n", s1.name, s1.roll, s1.cgpa);

    return 0;
}