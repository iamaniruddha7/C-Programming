#include<stdio.h>
#include<string.h>

struct student
{
    //char *name;
    char name[100]; 
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;
    //s1.name = "Aniruddha";
    strcpy(s1.name,"Aniruddha");
    s1.roll = 133;
    s1.cgpa = 6.89;

    printf("%s\n%d\n%f\n", s1.name,s1.roll,s1.cgpa);
    return 0;
}