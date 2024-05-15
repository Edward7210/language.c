/*编写一个函数,返回存储在double类型数组中最大值的下标,并在一个简单的程序中测试该函数*/
#include <stdio.h>

int find_max_index(double arr[], int size);

int main()
{
    double numbers[] = {10.0, 25.2, 7.3, 42.5, 15.6, 98.7, 31.5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int max_index = find_max_index(numbers, size);
    printf("The maximum value in the array is at index: %d\n", max_index);

    return 0;
}

int find_max_index(double arr[], int size)
{
    double max = arr[0];
    int max_index = 0;
    int i;
    for (i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }
    return max_index;
}
