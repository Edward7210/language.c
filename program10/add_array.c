/*编写一个函数,把两个数组中相对应的元素相加,然后把结果存储到第3个数组中。*/
#include <stdio.h>

void add_arrays(int size, double arr1[], double arr2[], double result[])
{
    for (int i = 0; i < size; i++)
    {
        result[i] = arr1[i] + arr2[i];
    }
}

int main()
{
    double arr1[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double arr2[] = {0.1, 0.2, 0.3, 0.4, 0.5};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    double result[size];

    add_arrays(size, arr1, arr2, result);

    printf("结果数组：\n");
    for (int i = 0; i < size; i++)
    {
        printf("%.1f ", result[i]);
    }
    printf("\n");

    return 0;
}
