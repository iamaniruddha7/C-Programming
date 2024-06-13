#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1 = {"Bhushan", 134, 8.2};
    printf("%s\n%d\n%f\n\n", s1.name, s1.roll, s1.cgpa);

    return 0;
}