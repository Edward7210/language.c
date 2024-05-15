/*编写一个程序,声明一个int类型的3*5的二维数组,并用合适的值初始化它。该程序打印数组中的值,
然后各值翻倍,并显示出个元素的新值。编写一个函数显示数组的内容,再编写一个函数把各元素的值翻倍。
这两个函数都以函数名和行数作为参数。*/
#include <stdio.h>

// 显示数组内容的函数
void display_array(int rows, int cols, int arr[rows][cols]) {
    printf("数组内容：\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// 将数组中各元素翻倍的函数
void double_elements(int rows, int cols, int arr[rows][cols]) {
    printf("翻倍后的数组内容：\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] *= 2;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int array[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    // 打印数组原始内容
    display_array(3, 5, array);

    // 将数组中各元素翻倍
    double_elements(3, 5, array);

    return 0;
}
