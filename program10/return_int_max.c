/*编写一个函数,返回存储在int类型数组中的最大值,并在一个简单的程序中测试该函数*/
#include <stdio.h>

int find_max(int arr[], int size);

int main()
{
    int numbers[] = {10, 25, 7, 42, 15, 98, 31};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int max_value = find_max(numbers, size);
    printf("The maximum value in the array is: %d\n", max_value);

    return 0;
}

int find_max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
