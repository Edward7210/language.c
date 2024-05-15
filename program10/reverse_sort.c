/*编写一个函数，把double类型数组中的数据倒序排列，并在一个简单的程序中测试该函数*/
#include <stdio.h>

void reverse_array(double arr[], int size);

int main()
{
    double numbers[] = {10.0, 25.2, 7.3, 42.5, 15.6, 98.7, 31.5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%.1f ", numbers[i]);
    }
    printf("\n");

    reverse_array(numbers, size);

    printf("Reversed array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%.1f ", numbers[i]);
    }
    printf("\n");

    return 0;
}

void reverse_array(double arr[], int size)
{
    double temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
