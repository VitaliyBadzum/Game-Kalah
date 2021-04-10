#include<stdio.h>
#include<string>

void GameBoard(int *PlayerField1, int *PlayerField2) // Вывод на екран игрового поля
{
    system("clear");
    printf("\t 6\t 5\t 4\t 3\t 2\t 1\n\n");

    for (int i=5;i>=0;i--)
    {
        printf("\e[32;1m\033[31m\t%2d\e[0m",*(PlayerField2+i));
    }
    printf("\n\n\n");

    printf("\t\e[1m\033[32m%2d\t\t\t\t\t%2d\e[0m\n\n\n",*(PlayerField2+6),*(PlayerField1+6));

    for (int i=0;i<6;i++)
    {
        printf("\e[32;1m\033[31m\t%2d\e[0m",*(PlayerField1+i));
    }
    printf("\n\n\n");

    printf("\t 1\t 2\t 3\t 4\t 5\t 6\n\n");

    return;
}
