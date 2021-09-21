// Программа-пример №2 из главы 8 Руководства по С
// для новичков, 3-е издание
// Файл Chapter8ex2.c
/* Эта программа-пример запрашивает у пользователя
некоторые основные данные, после чего выводит их на
экран, чтобы показать, что было введено */
#include <stdio.h>
main()
{
char topping[24];
int slices;
int month, day, year;
float price;
// Первая scanf ищет переменную типа float для
// сохранения стоимости пиццы
// Если пользователь не введет знак $ перед ценой,
// возникнут проблемы
    printf("How much cost pizza in your district?");
    printf("\n(Enter in format $XX.XX) \n");
    scanf(" $%f", &price);
// Начинка пиццы- строка, поэтому & не нужен
    printf("What is your favorite topping (in one word)?\n");
    scanf(" %s", topping);
    printf("How much slices with the %s topping", topping);
    printf(" you can eat at a time?\n");
    scanf(" %d", &slices);
    printf("What is the date today? (enter in format DD/MM/YY) \n");
    scanf(" %d/%d/%d", &day, &month, &year);
    printf("\n\nWhy not treat yourself to dinner %d/%d/%d ", day, month, year);
    printf("and eat %d slices of pizza with a %s topping? ", slices, topping);
    printf(" It will be cost only $%.2f!", price * slices);
    return 0;
}
