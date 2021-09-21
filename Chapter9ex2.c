// ѕрограмма-пример є2 из главы 9
// –уководства по — дл€ новичков, 3-е издание
// ‘айл Chapter9ex2.c
/* Ёта программа запрашивает у пользовател€ количество
приобретенных покрышек и стоимость одной покрышки,
после чего программа вычисл€ет чистую выручку,
прибавив к ней налог с продаж (sales tax). */
// ≈сли вы обнаружите, что ставка налога с продаж изменилась,
// воспользуйтесь директивой #define,
// чтобы изменить ее только в одном месте
#include <stdio.h>
#define SALESTAX .07
main()
{
    // ѕеременные дл€ хранени€ количества проданных покрышек,
    //цены, подытога без учета налогов и общей стоимости
    // с учетом налога
    int numTires;
    float tirePrice, beforeTax, netSales;
    /* ѕолучить количество купленных покрышек
    и стоимость покрышки */
    printf("How much tires did you buy?\n\a");
    scanf(" %d", &numTires);
    printf("How much is the price of 1 tire? (in format $XX.XX)\n" );
    scanf(" $%f", &tirePrice);
    /* ѕодсчет цены */
    beforeTax = tirePrice * numTires;
    netSales = beforeTax + (beforeTax * SALESTAX);
    printf("Your expenses for tires is $%.2f\n\n\n", netSales);
    return 0;
}
