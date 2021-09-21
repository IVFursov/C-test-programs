// Программа- пример №2 из главы 10
// Руководства по С для новичков, 3-е издание
// Файл Chapter10ex2.c
/* Эта программа увеличивает значение счетчика от 1 до 5,
при этом, выводя на печать обновленные значения, после чего
выполняет обратный отсчет до 1. При этом используются составные операторы */
#include <stdio.h>
main()
{
int ctr = 0;
ctr +=1; //Увеличивает значение до 1
printf("Znachenie schetchika: %d. \n", ctr);
ctr+=1; //Увеличивает значение счетчика до 3
printf("Znachenie schetchika: %d. \n", ctr+=1);
ctr+=1; // Увеличивает значение счетчика до 4
printf("Znachenie schetchika: %d. \n", ctr);
printf("Znachenie schetchika: %d. \n", ctr+=1);
ctr -=1; //уменьшает счетчик до 4
printf("Znachenie schetchika: %d. \n", ctr);
printf("Znachenie schetchika: %d. \n", ctr-=1);
printf("Znachenie schetchika: %d. \n", ctr-=1);
printf("Znachenie schetchika: %d. \n", ctr-=1);
return 0;
}
