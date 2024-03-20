#include <stdio.h>
#define PRAISE "You are an extraodinary being"
int main()
{
    char name[40];

    printf("What's your name? ");
    scanf("%s",name);
    printf("Hello, %s. %s",name,PRAISE);
    return 0;
}