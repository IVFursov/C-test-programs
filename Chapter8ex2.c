// ���������-������ �2 �� ����� 8 ����������� �� �
// ��� ��������, 3-� �������
// ���� Chapter8ex2.c
/* ��� ���������-������ ����������� � ������������
��������� �������� ������, ����� ���� ������� �� ��
�����, ����� ��������, ��� ���� ������� */
#include <stdio.h>
main()
{
char topping[24];
int slices;
int month, day, year;
float price;
// ������ scanf ���� ���������� ���� float ���
// ���������� ��������� �����
// ���� ������������ �� ������ ���� $ ����� �����,
// ��������� ��������
    printf("How much cost pizza in your district?");
    printf("\n(Enter in format $XX.XX) \n");
    scanf(" $%f", &price);
// ������� �����- ������, ������� & �� �����
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
