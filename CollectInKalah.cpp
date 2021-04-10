#include<stdio.h>

void CollectInKalah(int *PlayerField) // Сбор камней в калах и обнуления лунок
{
    for(int i=0;i<6;i++)
    {
        *(PlayerField+6)+=*(PlayerField+i);
        *(PlayerField+i)=0;
    }
    return;
}
