// ���������-������ �1 �� ����� 10
// ����������� �� � ��� ��������, 3-� �������
// ���� Chapter10ex1.c
/* ��� ��������� ����������� �������� �������� �� 1 ��
5, ��� ����, ������ �� ������ ������������ ��������,
����� ���� ��������� �������� ������ �� 1 */
#include <stdio.h>
main()
{
int ctr = 0;
ctr = ctr + 1; //����������� ������� �� 1
printf("Znachenie schetchika: %d. \n", ctr);
ctr = ctr + 1; // ����������� ������� �� 2
printf("Znachenie scetchika: %d. \n", ctr);
ctr = ctr + 1; //����������� ������� �� 3
printf("Znachenie schetchika: %d. \n", ctr);
ctr = ctr + 1; //����������� ������� �� 4
printf("Znachenie schetchika: %d. \n", ctr);
ctr=ctr+1; //����������� �������� �������� �� 5
printf("Znachenie schetchika: %d. \n", ctr);
ctr=ctr-1; //��������� ������� �� 4
printf("Znachenie schetchika: %d. \n", ctr);
ctr=ctr-1; //��������� �������� �������� �� 3
printf("Znachenie schetchika: %d. \n", ctr);
ctr=ctr-1; // ��������� �������� �������� �� 2
printf("Znachenie schetchika: %d. \n", ctr);
ctr=ctr-1; // ��������� �������� �������� �� 1
printf("Znachenie schetchika: %d. \n", ctr);
return 0;
}
