// Программа-пример №1 из главы 7 Руководства
// по С для новичков, 3-е издание
// Файл Chapter7ex1.c
/* Это простая программа-пример, перечисляющая трех
детей, их потребности в школьных принадлежностях,
а также стоимость их приобретения */
#include <stdio.h>
#include <string.h>
#include "Chapter7ex1.h"
main()
{
    int age;
    char childname[14] = "Timophey";

    printf("\n%s have %d kids\n", FAMILY, KIDS);

    age=11;
    printf("The elderest son %s is %d years old.\n", childname, age);
    strcpy(childname, "Nikolay");
    age=6;
    printf("Middle son %s is %d years old.\n", childname, age);
    age=3;
    strcpy(childname, "Boris");
    printf("The smallest son %s is %d years old.\n", childname, age);
    return 0;
}
