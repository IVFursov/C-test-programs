// ���������-������ �� ����� 6
// ����������� ��� ���������� �� C, 3-� �������
// ���� Chapter6ex1.c
// ��� ��������� ��������� ����� � �� �������� ������������
#include <stdio.h>
#include <string.h>
main()
{
    char Kid1[12];
    // Kid1 ����� ��������� ��� �� 11 ��������
    // Kid2 ����� ��������� 7 �������� (Maddie ���� ����-������)
    char Kid2[] = "Maddie";
    // Kid3 ���� �������� 7 ��������, �� ��� ������� �������������
    char Kid3[7] = "Andrew";
    // Hero1 ����� ��������� 7 �������� (�������� ����-������!)
    char Hero1[] = "Batman";
    // Hero2 ����� ����� �� ������ ������ �������������� ������������
    char Hero2[34] = "Spiderman";
    char Hero3[25];
    Kid1[0] = 'K'; // Kid1 ������������ �����������
    Kid1[1] = 'a'; // ������������, �� ��������
    Kid1[2] = 't';
    Kid1[3] = 'i';
    Kid1[4]='e';
    Kid1[5] = '\0'; // �� �������� ����-������, ����� C ����, �����
    //����������� ������
    strcpy(Hero3, "The Incredible Hulk");
    printf("%s\'s favorite hero is %s.\n", Kid1, Hero1);
    printf("%s\'s favorite hero is %s.\n", Kid2, Hero2);
    printf("%s\'s favorite hero is %s.\n", Kid3, Hero3);
    return 0;
}
