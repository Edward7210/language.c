#include <stdio.h>

// 输入数组数据的函数
void input_arrays(int rows, int cols, double arr[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        printf("请输入第%d个数组的%d个数：\n", i + 1, cols);
        for (int j = 0; j < cols; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
}

// 计算数组平均值的函数
double calculate_average(int size, double arr[size])
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    return total / size;
}

// 计算所有数据的平均值的函数
double calculate_total_average(int rows, int cols, double arr[rows][cols])
{
    double total = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            total += arr[i][j];
        }
    }
    return total / (rows * cols);
}

// 找出数组中最大值的函数
double find_max(int rows, int cols, double arr[rows][cols])
{
    double max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main()
{
    int rows = 3;
    int cols = 5;
    double arrays[rows][cols];

    // 提示用户输入数组
    printf("请输入%d个数组，每个数组包含%d个double类型的数：\n", rows, cols);
    input_arrays(rows, cols, arrays);

    // 计算每组5个数据的平均值并打印
    printf("\n每组%d个数据的平均值：\n", cols);
    for (int i = 0; i < rows; i++)
    {
        printf("第%d组：%.2f\n", i + 1, calculate_average(cols, arrays[i]));
    }

    // 计算所有数据的平均值并打印
    printf("\n所有数据的平均值：%.2f\n", calculate_total_average(rows, cols, arrays));

    // 找出这15个数据中最大的值并打印
    printf("\n最大值：%.2f\n", find_max(rows, cols, arrays));

    return 0;
}
