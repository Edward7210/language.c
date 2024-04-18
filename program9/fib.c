#include <stdio.h>

void fibonacci_loop(int n);

int main() {
    int n;
    
    printf("请输入要输出的前n个斐波那契数:\n");
    scanf("%d", &n);
    
    printf("斐波那契数列的前%d个数为:\n", n);
    fibonacci_loop(n);
    
    return 0;
}

void fibonacci_loop(int n) {
    if (n <= 0)
        return;
        
    int a = 1, b = 1;
    printf("%d ", a);
    for (int i = 2; i <= n; ++i) {
        printf("%d ", b);
        int temp = b;
        b = a + b;
        a = temp;
    }
}
