// ���������-������ �3 �� ����� 9
// ����������� �� � ��� ��������, 3-� �������
// ���� Chapter9ex3.c
/* ��� ��������� ��������� ������� �� ������� ������,
� ����� ��������� ������ ������� �������������� ��������. */
#include <stdio.h>
main()
{
int grade1, grade2, grade3, grade4;
float averageGrade, gradeDelta, percentDiff;
/* ������� ������� 88 ������ �� ������ � ������ �����,
������� �������� ��������� �������������� ������������ */
grade1 = grade3 = 88;
grade2 = 79;
// ������������ ������ ������ ��������� ������
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
