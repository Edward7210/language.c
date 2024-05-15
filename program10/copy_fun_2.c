/*编写一个程序,初始化一个double类型的3*5二维数组,使用一个处理变长数组的函数将其拷贝至
另一个二维数组中。还要编写一个以变长数组为形参的函数以显示两个数组的内容。这两个函数一个能
处理任意N*M数组*/
#include <stdio.h>
#include <stdlib.h>

// 函数声明
void copy_array(int rows, int cols, double src[rows][cols], double dest[rows][cols]);
void display_array(int rows, int cols, double arr[rows][cols]);

int main() {
    // 初始化源二维数组
    double src[3][5] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {6.6, 7.7, 8.8, 9.9, 10.0},
        {11.1, 12.2, 13.3, 14.4, 15.5}
    };
    // 初始化目标二维数组
    double dest[3][5];

    // 将源数组拷贝到目标数组
    copy_array(3, 5, src, dest);

    // 显示两个数组的内容
    printf("源数组：\n");
    display_array(3, 5, src);

    printf("目标数组：\n");
    display_array(3, 5, dest);

    return 0;
}

// 拷贝数组函数的实现
void copy_array(int rows, int cols, double src[rows][cols], double dest[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            dest[i][j] = src[i][j];
        }
    }
}

// 显示数组函数的实现
void display_array(int rows, int cols, double arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%.1f ", arr[i][j]);
        }
        printf("\n");
    }
}
