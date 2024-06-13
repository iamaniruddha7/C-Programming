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
    printf("\n%s\n%d\n%f\n\n", s1.name, s1.roll, s1.cgpa);
    
    struct student *ptr = &s1;
    printf("%s\n", (*ptr).name);
    printf("%d\n", (*ptr).roll);
    printf("%f\n\n", (*ptr).cgpa);

    printf("%f\n\n", ptr->cgpa);

    return 0;
}