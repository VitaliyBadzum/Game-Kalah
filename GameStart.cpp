#include<stdio.h>
#include"GameStart.h"

void GameStart()
{
    int stones = 72;
    int PlayerStart = 1;
    int PitNumber = 7;
    int holes=stones/12;
    bool CorrectChoice=false;
    int PlayerEnd = 1;
    int PlayerField1[7]={holes,holes,holes,holes,holes,holes,0};
    int PlayerField2[7]={holes,holes,holes,holes,holes,holes,0};


    while(1)
    {
        if(PitNumber!=7)
        {
            PlayerStart=3-PlayerStart;
        }
        if(PlayerStart==1)
        {
            if(CheckField(PlayerField1))
            {
                CollectInKalah(PlayerField2);
                GameBoard(PlayerField1,PlayerField2);
                return;
            }
        }
        else
        {
            if(CheckField(PlayerField2))
            {
                CollectInKalah(PlayerField1);
                GameBoard(PlayerField1,PlayerField2);
                return;
            }
        }

        GameBoard(PlayerField1,PlayerField2);
        CorrectChoice = PlayerChoice(PlayerStart,&PitNumber,true);

        if(CorrectChoice)
        {
            if(PlayerStart==1)
            {
                CorrectChoice = CheckMove(PlayerField1,PitNumber);
            }
            else
            {
                CorrectChoice = CheckMove(PlayerField2,PitNumber);
            }
        }


        while(!CorrectChoice)
        {
            GameBoard(PlayerField1,PlayerField2);
            CorrectChoice = PlayerChoice(PlayerStart,&PitNumber,CorrectChoice);

            if(CorrectChoice)
            {
                if(PlayerStart==1)
                {
                    CorrectChoice = CheckMove(PlayerField1,PitNumber);
                }
                else
                {
                    CorrectChoice = CheckMove(PlayerField2,PitNumber);
                }
            }
        }

        PlayerEnd = PlayerMove(PlayerField1,PlayerField2,PlayerStart,&PitNumber);

        if (PlayerStart==PlayerEnd && PitNumber!=7)
        { // при попадании игрока в свою пустую ячейку, он забирает камни с противоположной ячейки противника если она не пустая

            if(PlayerStart==1)
            {
                if(PlayerField1[PitNumber-1]==1 && PlayerField2[6-PitNumber]!=0)
                {
                    PlayerField1[6]+=PlayerField1[PitNumber-1]+PlayerField2[6-PitNumber];
                    PlayerField1[PitNumber-1]=0;
                    PlayerField2[6-PitNumber]=0;
                }
            }
            else
            {
                if(PlayerField2[PitNumber-1]==1 && PlayerField1[6-PitNumber]!=0)
                {
                    PlayerField2[6]+=PlayerField2[PitNumber-1]+PlayerField1[6-PitNumber];
                    PlayerField2[PitNumber-1]=0;
                    PlayerField1[6-PitNumber]=0;
                }
            }
        }

        if(PlayerField1[6]>stones/2 || PlayerField2[6]>stones/2 || (PlayerField1[6]+PlayerField2[6])==stones)
        {
            GameBoard(PlayerField1,PlayerField2);
            return;
        }

    }

    return;
}
