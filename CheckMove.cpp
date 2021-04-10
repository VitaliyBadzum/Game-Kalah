#include<stdio.h>

bool CheckMove(int *PlayerField,int number_holes) // Проверка правильности хода (не выбрал ли игрок пустую ячейку)
{
    if(*(PlayerField+(number_holes-1))==0)
    {
        return 0;
    }
    return 1;
}
