/*Daphne以10%的单利息投资了100美元。Deirdre以5%的复合利息投资了100美元。编写一个程序,
计算需要多少年Deirdre的投资额才会超过Daphne,并显示那是两人的投资额。*/
#include <stdio.h>

int main()
{
    double sum1 = 100; // Daphne
    double sum2 = 100; // Deirdre
    int year = 0;
    do
    {
        sum1 += 10;
        sum2 = sum2 * (1 + 0.05);
        year++;
    } while (sum2 < sum1);

    printf("Daphne=%.2lf    Deirdre=%.2lf\n", sum1, sum2);
    printf("year = %d", year);

    return 0;
}