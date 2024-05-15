/*使用编程联系2中的拷贝函数,把一个内涵7个元素的数组中的第3~5个元素拷贝至内涵3个元素的数组中。
该函数本身不需要修改,只需要选择合适的实际参数(实际参数不需要是数组名和数组大小,只需要是数组
元素的地址和待处理元素的个数。)*/
#include <stdio.h>
#include <stdlib.h>

void copy_elements(int *src, int *dest, int start, int end) {
    int i, j = 0;
    for (i = start; i <= end; i++) {
        dest[j++] = src[i];
    }
}

int main() {
    int src[] = {1, 2, 3, 4, 5, 6, 7};
    int dest[3];
    
    // 调用函数，将src数组的第3~5个元素拷贝至dest数组中
    copy_elements(src, dest, 2, 4);

    // 打印结果
    printf("拷贝后的数组：");
    for (int i = 0; i < 3; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");

    return 0;
}
