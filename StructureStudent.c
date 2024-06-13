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
    struct student s1;
    strcpy(s1.name,"Aniruddha");
    s1.roll = 133;
    s1.cgpa = 6.89;
    printf("\n%s\n%d\n%f\n\n", s1.name,s1.roll,s1.cgpa);

    struct student s2;
    strcpy(s2.name, "Samidha");
    s2.roll = 134;
    s2.cgpa = 9.2;
    printf("%s\n%d\n%f\n\n", s2.name,s2.roll,s2.cgpa);

    struct student s3;
    strcpy(s3.name, "Chinmay");
    s3.roll = 135;
    s3.cgpa = 7.6;
    printf("%s\n%d\n%f\n\n", s3.name,s3.roll,s3.cgpa);

    return 0;
}