#include <stdio.h>
#include <string.h>

struct address
{
    int houseno;
    int block;
    char city[100];
    char state[100];
};

int main()
{
    struct address add[5] = {

        {701, 1, "Nagpur", "Maharashtra"},
        {702, 2, "Mumbai", "Maharashtra"},
        {703, 3, "Pune", "Maharashtra"},
        {704, 4, "Delhi", "Haryana"},
        {705, 5, "Banglore", "Karnataka"}

    };

    printf("\n%d\n%d\n%s\n%s\n", add[0].houseno, add[0].block, add[0].city, add[0].state);
    printf("\n%d\n%d\n%s\n%s\n", add[1].houseno, add[1].block, add[1].city, add[1].state);
    printf("\n%d\n%d\n%s\n%s\n", add[2].houseno, add[2].block, add[2].city, add[2].state);
    printf("\n%d\n%d\n%s\n%s\n", add[3].houseno, add[3].block, add[3].city, add[3].state);
    printf("\n%d\n%d\n%s\n%s\n\n", add[4].houseno, add[4].block, add[4].city, add[4].state);

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\nAddress %d:\n", i + 1);
    //     printf("House No: %d\n", add[i].houseno);
    //     printf("Block: %d\n", add[i].block);
    //     printf("City: %s\n", add[i].city);
    //     printf("State: %s\n", add[i].state);
    //     printf("\n");
    // }

    return 0;
}