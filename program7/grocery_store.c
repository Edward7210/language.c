/*ABC�ʹ��ӻ�����۵���޺�ۼ�Ϊ2.05��Ԫ/��,����ۼ�Ϊ1.15��Ԫ/��,���ܲ��ۼ�Ϊ1.09��Ԫ/����
������˷�֮ǰ,100��Ԫ�Ķ�����5%�Ĵ����Żݡ����ڻ����5���Ķ�����ȡ6.5��Ԫ���˷ѺͰ�װ��,
5~20���Ķ�����ȡ14��Ԫ���˷ѺͰ�װ��,����20���Ķ�����14��Ԫ�Ļ�����û����1������0.5��Ԫ��
��дһ������,��ѭ������switch���ʵ���û����벻ͬ����ĸʱ�в��õ���Ӧ,������a����Ӧ�����û�
������޺�İ���,b����˵İ���,c�Ǻ��ܲ��İ���,q���˳����ġ�����Ҫ��¼�ۼƵ���������,����û�
����4�������,Ȼ������5�������,����Ӧ�ñ���9������ˡ�Ȼ��,�ó���Ҫ���������ܼۡ��ۿۡ�
�˷ѺͰ�װ�ѡ����,����Ӧ��ʾ���еĹ�����Ϣ:�����ۼۡ��������������������߲˷��á��������ܷ���
�ۿۡ��˷ѺͰ�װ��,�Լ����еķ����ܶ*/
#include <stdio.h>

int main()
{
    char choice;
    int pounds_xian, pounds_tian, pounds_hu;
    int total_pounds = 0;
    float price_xian = 2.05, price_tian = 1.15, price_hu = 1.09;
    float discount = 0.05;
    float freight = 0;
    float total_cost, total_veggie_cost, total_discount, total_freight, total_packaging;

    printf("��ӭ����ABC�ʹ��ӻ���!\n");

    do
    {
        printf("\n��ѡ����Ҫ�������Ʒ:\n");
        printf("a. ��޺\n");
        printf("b. ���\n");
        printf("c. ���ܲ�\n");
        printf("q. �˳�\n");
        printf("��ѡ�� ");
        scanf(" %c", &choice);

        switch (choice)
        {
        case 'a':
            printf("��������޺�İ�����");
            scanf("%d", &pounds_xian);
            total_pounds += pounds_xian;
            break;
        case 'b':
            printf("��������˵İ�����");
            scanf("%d", &pounds_tian);
            total_pounds += pounds_tian;
            break;
        case 'c':
            printf("��������ܲ��İ�����");
            scanf("%d", &pounds_hu);
            total_pounds += pounds_hu;
            break;
        case 'q':
            break;
        default:
            printf("��Чѡ��������ѡ��\n");
            break;
        }
    } while (choice != 'q');

    // �������
    total_veggie_cost = pounds_xian * price_xian + pounds_tian * price_tian + pounds_hu * price_hu;
    if (total_pounds <= 5)
    {
        freight = 6.5;
    }
    else if (total_pounds <= 20)
    {
        freight = 14;
    }
    else
    {
        freight = 14 + (total_pounds - 20) * 0.5;
    }
    total_discount = total_veggie_cost * discount;
    total_cost = total_veggie_cost - total_discount + freight;

    // ��ӡ������Ϣ
    printf("\n������Ϣ:\n");
    printf("��޺���ۣ�$%.2f/��������������%d��\n", price_xian, pounds_xian);
    printf("��˵��ۣ�$%.2f/��������������%d��\n", price_tian, pounds_tian);
    printf("���ܲ����ۣ�$%.2f/��������������%d��\n", price_hu, pounds_hu);
    printf("�������߲˷��ã�$%.2f\n", total_veggie_cost);
    printf("�ۿۣ�$%.2f\n", total_discount);
    printf("�˷ѺͰ�װ�ѣ�$%.2f\n", freight);
    printf("�ܷ��ã�$%.2f\n", total_cost);

    return 0;
}
