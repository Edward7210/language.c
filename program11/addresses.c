#include <stdio.h>
#define MSG "I am special"
int main()
{
    char ar[] = MSG;
    const char *pt = MSG;
    printf("address of \"I am speical\": %p \n", "I am special");
    printf("            address ar: %p\n", ar);
    printf("            address pt: %p\n", pt);
    printf("        address ar MSG: %p\n", MSG);
    printf("address of \"I am speical\": %p \n", "I am special");

    return 0;
}