/*½»»»º¯Êý*/
#include <stdio.h>
void swap(int *x, int *y);
int main()
{
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    swap(&x, &y);
    printf("Now x = %d and y = %d.\n", x, y);

    return 0;
}
void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}