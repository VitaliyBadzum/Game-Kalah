#include<stdio.h>

bool CheckField(int *PlayerField) //Проверка есть ли вобще камни в лунках
{
    int check=0;
    for(int i=0;i<6;i++)
    {
        check+=*(PlayerField+i);
    }
    if(check==0)
    {
        return 1;
    }
    return 0;
}
