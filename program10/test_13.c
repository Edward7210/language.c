/*编写一个程序，提示用户输入3数组，每数组包含5个double类型的数(假设用户都正确地相应，不会输入
非法数值数据)。该程序应完成下列任务。
a.把用户输入的数组存储到3*5的数组中
b.计算每组5个数据的平均值
c.计算所有数据的平均值
d.找出这15个数据中最大的值
e.打印结果*/
#include <stdio.h>

#define ROWS 3
#define COLS 5

// 函数声明
void input_arrays(double arr[ROWS][COLS]);
double calculate_average(double arr[], int size);
double find_max(double arr[ROWS][COLS]);
double calculate_total_average(double arr[ROWS][COLS]);

int main()
{
    double arrays[ROWS][COLS];

    // 提示用户输入数组
    printf("请输入3个数组，每个数组包含5个double类型的数：\n");
    input_arrays(arrays);

    // 计算每组5个数据的平均值并打印
    printf("\n每组5个数据的平均值：\n");
    for (int i = 0; i < ROWS; i++)
    {
        printf("第%d组：%.2f\n", i + 1, calculate_average(arrays[i], COLS));
    }

    // 计算所有数据的平均值并打印
    printf("\n所有数据的平均值：%.2f\n", calculate_total_average(arrays));

    // 找出这15个数据中最大的值并打印
    printf("\n最大值：%.2f\n", find_max(arrays));

    return 0;
}

// 函数定义

// 输入数组数据的函数
void input_arrays(double arr[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        printf("请输入第%d个数组的5个数：\n", i + 1);
        for (int j = 0; j < COLS; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
}

// 计算数组平均值的函数
double calculate_average(double arr[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    return total / size;
}

// 计算所有数据的平均值的函数
double calculate_total_average(double arr[ROWS][COLS])
{
    double total = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            total += arr[i][j];
        }
    }
    return total / (ROWS * COLS);
}

// 找出数组中最大值的函数
double find_max(double arr[ROWS][COLS])
{
    double max = arr[0][0];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
