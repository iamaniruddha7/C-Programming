#include<stdio.h>
#include<string.h>

struct student
{
    char name[100]; 
    int roll;
    float cgpa;
};

int main()
{
    struct student IT[100];
    IT[0].roll = 133;
    IT[0].cgpa = 7.3;
    strcpy(IT[0].name, "Aniruddha");   
    printf("%s\n%d\n%f\n\n", IT[0].name, IT[0].roll, IT[0].cgpa);
    
    struct student s1;
    {
        struct student s1 = { "Bhushan", 134, 8.2};
        printf("%s\n%d\n%f\n\n", s1.name, s1.roll, s1.cgpa);
    };
    
    return 0;
}