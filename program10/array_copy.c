/*编写一个程序,初始化一个double类型的数组,然后把该数组的内容拷贝至其他3个数组中(在main()中声明
这4个数组)。使用带数组表示法的函数进行第1份拷贝。使用带指针表示法和指针递增的函数进行第2份拷贝。
把目标数组名、源数组名和待拷贝的元素个数作为前两个函数的参数。第3个函数以目标数组名、源数组名和
指向源数组最后一个元素后面的元素的指针。也就是说,给定以下声明,则调用函数如下所示:
double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
double target1[5];
double target2[5];
double target3[5];
copy_arr(target1, source, 5);
copy_ptr(target2, source, 5);
copy_ptrs(target3, source, source + 5);*/
#include <stdio.h>

void copy_arr(double target[], double source[], int n);
void copy_ptr(double *target, double *source, int n);
void copy_ptrs(double *target, double *start, double *end);

int main()
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    // 使用带数组表示法的函数进行拷贝
    copy_arr(target1, source, 5);
    // 使用带指针表示法和指针递增的函数进行拷贝
    copy_ptr(target2, source, 5);
    // 使用指向源数组最后一个元素后面的元素的指针进行拷贝
    copy_ptrs(target3, source, source + 5);

    // 输出结果
    printf("target1: ");
    for (int i = 0; i < 5; i++)
        printf("%.1f ", target1[i]);
    printf("\n");

    printf("target2: ");
    for (int i = 0; i < 5; i++)
        printf("%.1f ", target2[i]);
    printf("\n");

    printf("target3: ");
    for (int i = 0; i < 5; i++)
        printf("%.1f ", target3[i]);
    printf("\n");

    return 0;
}

// 使用带数组表示法的函数进行拷贝
void copy_arr(double target[], double source[], int n)
{
    for (int i = 0; i < n; i++)
        target[i] = source[i];
}

// 使用带指针表示法和指针递增的函数进行拷贝
void copy_ptr(double *target, double *source, int n)
{
    for (int i = 0; i < n; i++)
        *(target + i) = *(source + i);
}

// 使用指向源数组最后一个元素后面的元素的指针进行拷贝
void copy_ptrs(double *target, double *start, double *end)
{
    while (start < end)
    {
        *target = *start;
        target++;
        start++;
    }
}