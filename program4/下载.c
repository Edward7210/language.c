/*��дһ������,��ʾ�û���������λÿ��(MB/s)Ϊ��λ�������ٶȺ������ֽ�(MB)Ϊ��λ���ļ���С��
������Ӧ�����ļ�������ʱ�䡣ע��,����1�ֽڵ���8λ��ʹ��float����,����/��Ϊ���š�
�ó���Ҫ������ĸ�ʽ��ӡ3��������ֵ(�����ٶȡ��ļ���С������ʱ��),��ʾС�������λ��*/
#include <stdio.h>

int main()
{
    float down_speed, file_size, down_time;
    scanf("%f %f", &down_speed, &file_size);

    down_time = file_size / down_speed * 8;

    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds",
           down_speed, file_size, down_time);

    return 0;
}