// ���������- ������ �2 �� ����� 10
// ����������� �� � ��� ��������, 3-� �������
// ���� Chapter10ex2.c
/* ��� ��������� ����������� �������� �������� �� 1 �� 5,
��� ����, ������ �� ������ ����������� ��������, ����� ����
��������� �������� ������ �� 1. ��� ���� ������������ ��������� ��������� */
#include <stdio.h>
main()
{
int ctr = 0;
ctr +=1; //����������� �������� �� 1
printf("Znachenie schetchika: %d. \n", ctr);
ctr+=1; //����������� �������� �������� �� 3
printf("Znachenie schetchika: %d. \n", ctr+=1);
ctr+=1; // ����������� �������� �������� �� 4
printf("Znachenie schetchika: %d. \n", ctr);
printf("Znachenie schetchika: %d. \n", ctr+=1);
ctr -=1; //��������� ������� �� 4
printf("Znachenie schetchika: %d. \n", ctr);
printf("Znachenie schetchika: %d. \n", ctr-=1);
printf("Znachenie schetchika: %d. \n", ctr-=1);
printf("Znachenie schetchika: %d. \n", ctr-=1);
return 0;
}
