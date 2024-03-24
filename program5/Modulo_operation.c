/*编写一个程序,显示求模运算的结果。把用户输入的第1个整数作为求模运算符的第2个运算对象,该数在
运算过程中保持不变。用户后面输入的数是第1个运算对象。当用户输入一个非正值是,程序结果。*/
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d", &num1);
    printf("Now enter the first operand:");
    scanf("%d", &num2);
    printf("%d %% %d is %d\n", num2, num1, num2 % num1);
    while (1)
    {
        printf("Enter next number for first operand:");
        scanf("%d", &num2);
        if (num2 <= 0)
        {
            printf("Done!\n");
            break;
        }
        printf("%d %% %d is %d\n", num2, num1, num2 % num1);
    }

    return 0;
}