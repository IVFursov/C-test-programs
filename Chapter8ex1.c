// ���������-������ �1 �� ����� 8 "����������� �� �
// ��� ��������", 3-� �������
// ���� Chapter8ex1.c
/* ��� ���������-������ ����������� � ������������� ���������
�������� ������, ����� ���� ������� �� �� �����, ����� ��������, ���
���� ������� */
#include <stdio.h>
main()
{
    // ��������� ����������, �������� ������� �����
//��������� �������� scanf()
char firstInitial;
char lastInitial;
int age;
int favorite_number;
printf("What is a first letter of your surname? \n");
scanf(" %c", &firstInitial);
printf("What is a first letter of your name?\n");
scanf(" %c", &lastInitial);
printf("How old are you?\n");
scanf(" %d", &age);
printf("What is your favorite number?\n");
scanf(" %d", &favorite_number);
printf("Your initials is: %c.%c.\n", firstInitial, lastInitial);
printf("You are %d years old\n", age);
printf("Your favorite number is: %d\n", favorite_number);
return 0;
}
