// ������
#include <stdio.h>
#define RATEL1 0.13230                               // �״�ʹ��360kwh�ķ���
#define RATEL2 0.15040                               // ������ʹ��108kwh�ķ���
#define RATEL3 0.30025                               // ������ʹ��252kwh�ķ���
#define RATEL4 0.34025                               // ʹ�ó���720kwh�ķ���
#define BREAK1 360.0                                 // ���ʵĵ�1���ֽ��
#define BREAK2 468.0                                 // ���ʵĵ�2���ֽ��
#define BREAK3 720.0                                 // ���ʵĵ�3���ֽ��
#define BASE1 (RATEL1 * BREAK1)                      // ʹ��360kwh�ķ���
#define BASE2 (BASE1 + (RATEL2 * (BREAK2 - BREAK1))) // ʹ��468kwh�ķ���
#define BASE3 (BASE2 + (RATEL3 * (BREAK3 - BREAK2))) // ʹ��720kwh�ķ���
int main()
{
    double kwh;  // ʹ�õ�ǧ��ʱ
    double bill; // ���

    printf("Please enter the kwh used.\n");
    scanf("%lf", &kwh); //%lf��Ӧdouble����
    if (kwh <= BREAK1)
    {
        bill = RATEL1 * kwh;
    }
    else if (kwh <= BREAK2) // 360~460kwh
    {
        bill = BASE1 + (RATEL2 * (kwh - BREAK1));
    }
    else if (kwh <= BREAK3) // 468~720kwh
    {
        bill = BASE2 + (RATEL3 * (kwh - BREAK2));
    }
    else // ����720kwh
    {
        bill = BASE3 + (RATEL4 * (kwh - BREAK3));
    }
    printf("The charge for %.lf kwh is $%1.2f.\n", kwh, bill);

    return 0;
}