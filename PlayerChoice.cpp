#include <stdio.h>
#include <string>
#include "GameStart.h"

bool PlayerChoice(int PlayerNumber, int *PitNumber, bool CorrectChoice)
{
    char currPosition,Exit='z';
    int x=0;

    if (!CorrectChoice)
    {
        printf("\e[5mНеправильный ввод ячейки\e[0m\n");
    }

    printf("Игрок %d введите %s ячейки: ",PlayerNumber,(CorrectChoice?"номер":"повторно номер"));

    scanf("%c",&currPosition);
    if(currPosition==Exit)
    {
        UserMenu();
        exit(EXIT_SUCCESS);
    }

    while ( getchar() != '\n' ) x++;

    *PitNumber = atoi(&currPosition);

    //возвращает true если игрок выбрал правильную ячейку (игрок не может выбрать калах; должен ввести цифру 1-6)
    return (*PitNumber==0 || *PitNumber>6 || x>0)?false:true;
}
