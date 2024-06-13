#include <stdio.h>

void Message1(){
    printf("Namaste\n");
}
void Message2(){
    printf("Bonjour\n");
}
void Message3(){
    printf("Get Lost\n");
}

int main()
{
    printf("i for indian & f for french: ");
    char n;
    scanf("%c", &n);
    if (n == 'i'){
        Message1();
    }
    else if (n == 'f'){
        Message2();
    }
    else{
        Message3();
    }
    return 0;
}
