/*编写一个程序,初始化一个double类型的二维数组,使用编程练习2中的一个拷贝函数把该数组中的
数据拷贝至另一个二维数组(因为二维数组是数组的数组,所以可以使用处理一维数组的拷贝函数来
处理数组中的每个子数组)*/
#include <stdio.h>

#define ROWS 3
#define COLS 4

void copy_2d_array(double target[][COLS], double source[][COLS], int rows, int cols);

int main()
{
    double source[ROWS][COLS] = {
        {1.1, 2.2, 3.3, 4.4},
        {5.5, 6.6, 7.7, 8.8},
        {9.9, 10.10, 11.11, 12.12}};

    double target[ROWS][COLS];

    copy_2d_array(target, source, ROWS, COLS);

    // 打印目标数组的内容,验证是否成功拷贝
    printf("Copied array:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%.2f ", target[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void copy_2d_array(double target[][COLS], double source[][COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            target[i][j] = source[i][j];
            // 等价于*(target + i * cols + j) = *(source + i * cols + j);
        }
    }
}
