#include<stdio.h>

int PlayerMove(int *PlayerField1,int *PlayerField2,int player,int *pitNumber)
{   // Ход игрока, престановка камней по лунках
    int gm=0;

    if(player==1)
    {

        gm=*(PlayerField1+(*pitNumber-1));
        *(PlayerField1+(*pitNumber-1))=0;

        int i = *pitNumber;

        do
        {
            for(;i<7 && gm>0; i++, gm--)
            {
                *(PlayerField1+i)+=1;
            }
            if(gm==0)
            {
                *pitNumber=i;
                player=1;
                break;
            }

            i=0;
            for(;i<6 && gm>0; i++, gm--)
            {
                *(PlayerField2+i)+=1;
            }
            if(gm==0)
            {
               *pitNumber=i;
               player=2;
               break;
            }
            i=0;
        }while(gm>0);
    }
    else
    {
        gm=*(PlayerField2+(*pitNumber-1));
        *(PlayerField2+(*pitNumber-1))=0;

        int i = *pitNumber;
        do
        {
            for(;i<7&&gm>0;i++,gm--)
            {
                *(PlayerField2+i)+=1;
            }
            if(gm==0)
            {
                *pitNumber=i;
                player=2;
                break;
            }

            i=0;
            for(;i<6&&gm>0;i++,gm--)
            {
                *(PlayerField1+i)+=1;
            }
            if(gm==0)
            {
                *pitNumber=i;
                player=1;
                break;
            }
            i=0;

        }while(gm>0);
    }
    return player;
}
