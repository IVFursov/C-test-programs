// Программа-пример №1 из главы 8 "Руководства по С
// для новичков", 3-е издание
// Файл Chapter8ex1.c
/* Эта программа-пример запрашивает у пользователей некоторые
основные данные, после чего выводит их на экран, чтобы показать, что
было введено */
#include <stdio.h>
main()
{
    // Установка переменных, значения которым будут
//присвоены функцией scanf()
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
