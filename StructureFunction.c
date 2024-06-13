#include<stdio.h>
#include<string.h>

struct student
{
    char name[100]; 
    int roll;
    float cgpa;
};

void printinfo(struct student s1)
{
    printf("%s\n\n", s1.name);
    printf("%d\n\n", s1.roll);
    printf("%f\n\n", s1.cgpa);
    //s1.roll = 27;
}

int main()
{
    struct student s1 = { "Aniruddha", 133, 7.9};
    printinfo(s1);
    s1.roll = 177;
    printf("%d\n", s1.roll);
    return 0;
}