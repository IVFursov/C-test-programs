// Программа-пример №3 из главы 9
// Руководства по С для новичков, 3-е издание
// Файл Chapter9ex3.c
/* Эта программа вычисляет среднюю из четырех оценку,
а также выполняет другие базовые математическин операции. */
#include <stdio.h>
main()
{
int grade1, grade2, grade3, grade4;
float averageGrade, gradeDelta, percentDiff;
/* Студент получил 88 баллов за первый и третий тесты,
поэтому подойдет выражение множественного присваивания */
grade1 = grade3 = 88;
grade2 = 79;
// Пользователь должен ввести четвертую оценку
printf("What is your grade of fourth test");
printf(" (integer from 0 to 100)?");
scanf(" %d", &grade4);
averageGrade = (grade1+grade2+grade3+grade4)/4;
printf("Your average grade is %.1f\n", averageGrade);
gradeDelta = 95 - averageGrade;
percentDiff = 100 * ((95-averageGrade) / 95);
printf("Your grade is lower on %.1f score, then ", gradeDelta);
printf(" - the best grade in the class\n");
printf("Your result is worser on %.1f percent, ", percentDiff);
printf("then this grade!\n\n\n");
return 0;
}
