// ���������-������ �2 �� ����� 9
// ����������� �� � ��� ��������, 3-� �������
// ���� Chapter9ex2.c
/* ��� ��������� ����������� � ������������ ����������
������������� �������� � ��������� ����� ��������,
����� ���� ��������� ��������� ������ �������,
�������� � ��� ����� � ������ (sales tax). */
// ���� �� ����������, ��� ������ ������ � ������ ����������,
// �������������� ���������� #define,
// ����� �������� �� ������ � ����� �����
#include <stdio.h>
#define SALESTAX .07
main()
{
    // ���������� ��� �������� ���������� ��������� ��������,
    //����, �������� ��� ����� ������� � ����� ���������
    // � ������ ������
    int numTires;
    float tirePrice, beforeTax, netSales;
    /* �������� ���������� ��������� ��������
    � ��������� �������� */
    printf("How much tires did you buy?\n\a");
    scanf(" %d", &numTires);
    printf("How much is the price of 1 tire? (in format $XX.XX)\n" );
    scanf(" $%f", &tirePrice);
    /* ������� ���� */
    beforeTax = tirePrice * numTires;
    netSales = beforeTax + (beforeTax * SALESTAX);
    printf("Your expenses for tires is $%.2f\n\n\n", netSales);
    return 0;
}
