/*��дһ������Ҫ���û�����һ�������¶ȡ�����Ӧ��ȡdouble���͵�ֵ��Ϊ�¶�ֵ�����Ѹ�ֵ��Ϊ����
���ݸ�һ���û��Զ���ĺ���Temperature()���ú������������¶ȺͿ����¶ȣ�����С���������λ���ֵ�
������ʾ3���¶ȡ�Ҫʹ�ò�ͬ���±�����ʾ��3���¶�ֵ�������ǻ����¶�ת�����¶ȵĹ�ʽ
�����¶� = 5.0/9.0 * (�����¶� - 32.0)
�����±곣���ڿ�ѧ�о���0��ʾ�����㣬��������¶ȡ������������¶�ת�����¶ȵĹ�ʽ:
�����¶� = �����¶� + 273.16
Temperature()��������const�����¶�ת����ʹ�õı�������main()������ʹ��һ��ѭ�����û��ظ�������
�ȣ����û�����q������������ʱ��ѭ��������scanf()�������ض�ȡ���ݵ����������������ȡ�����򷵻�1
�����ȡq�򲻷���1.����ʹ��==�������scanf()�ķ���ֵ��1���Ƚϣ�������ֵ�Ƿ���ȡ�*/
#include <stdio.h>

void Temperature(double F_temperature);

int main()
{
    double F_temperature;
    int scanf_result;

    printf("�����뻪���¶�(����q�˳�):");
    while ((scanf_result = scanf("%lf", &F_temperature)) == 1)
    {
        Temperature(F_temperature);
        printf("�����뻪���¶�(����q�˳�):");
    }

    if (scanf_result != 1)
    {
        printf("Done!\n");
    }

    return 0;
}

void Temperature(double F_temperature)
{
    const double C_temperature = 5.0 / 9.0 * (F_temperature - 32.0);
    const double K_temperature = C_temperature + 273.16;

    printf("�����¶ȣ�%.2lf\n", F_temperature);
    printf("�����¶ȣ�%.2lf\n", C_temperature);
    printf("�����¶ȣ�%.2lf\n", K_temperature);
}