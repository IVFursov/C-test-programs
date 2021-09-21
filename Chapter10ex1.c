// Программа-пример №1 из главы 10
// Руководства по С для новичков, 3-е издание
// Файл Chapter10ex1.c
/* Эта программа увеличивает значение счетчика от 1 до
5, при этом, выводя на печать обновлденные значения,
после чего выполняет обратный отсчет до 1 */
#include <stdio.h>
main()
{
int ctr = 0;
ctr = ctr + 1; //увеличивает счетчик до 1
printf("Znachenie schetchika: %d. \n", ctr);
ctr = ctr + 1; // Увеличивает счетчик до 2
printf("Znachenie scetchika: %d. \n", ctr);
ctr = ctr + 1; //увеличивает счетчик до 3
printf("Znachenie schetchika: %d. \n", ctr);
ctr = ctr + 1; //увеличивает счетчик до 4
printf("Znachenie schetchika: %d. \n", ctr);
ctr=ctr+1; //Увеличивает значение счетчика до 5
printf("Znachenie schetchika: %d. \n", ctr);
ctr=ctr-1; //Уменьшает счетчик до 4
printf("Znachenie schetchika: %d. \n", ctr);
ctr=ctr-1; //Уменьшает значение счетчика до 3
printf("Znachenie schetchika: %d. \n", ctr);
ctr=ctr-1; // Уменьшает значение счетчика до 2
printf("Znachenie schetchika: %d. \n", ctr);
ctr=ctr-1; // Уменьшает значение счетчика до 1
printf("Znachenie schetchika: %d. \n", ctr);
return 0;
}
