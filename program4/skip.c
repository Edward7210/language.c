#include <stdio.h>
int main()
{
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d",&n);
    printf("The last integr was %d\n",n);
}