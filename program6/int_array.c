/*编写一个程序,创建一个包含8个元素的int类型数组,分别把数组元素设置为2的前8次幂。
使用for循环设置数组元素的值,使用do while循环显示数组元素的值*/
#include <stdio.h>
#include <math.h>
#define size 8
int main()
{
    int element[size];
    int i;
    for (i = 1; i <= size; i++)
    {
        element[i] = pow(2, i);
    }

    int k = 1;
    do
    {
        printf("%d ", element[k++]);
    } while (k <= size);
}