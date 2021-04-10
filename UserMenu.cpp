#include <stdio.h>
#include <string>
#include "GameStart.h"

void UserMenu()
{
    int variant;
    do
    {
        do{
            printf("\n:\e[5;4;031m*******************************GAME KALAH*******************************\e[0m:\n"
                "\e[36mВыберите вариант(Введите цифру и нажмите Enter)\n\e[0m");

            printf("\e[36m1 -> Играть\n"
                   "2 -> Посмотреть прaвила\n"
                   "3 -> Клавиши управления\n"
                   "4 -> Выйти\n\e[0m");
            printf( "> > > > > ");
            scanf("%d",&variant);
            while ( getchar() != '\n' );
            system("clear");

            switch (variant)
            {
                case 1:
                    GameStart();
                break;
                case 2:
                    printf(":*********************** Правила ***********************:\n"
                    "-В калах играет два человека. Комплект для игры калах представляет собой 12 лунок выстроенных в два ряда, и две большие лунки по сторонам, которые и называются ""калах"".\n"
                    " Исходная позиция: в каждой из 12 лунок лежит по 6 камней. Двое игроков сидят друг напротив друга. Ход заключается в том, что один из играющих берет все шарики из любой\n"
                    " лунки в своем ряду и распределяет их против часовой стрелки по одному в каждую из следующих лунок и свой калах, пропуская калах соперника.\n"
                    "-*Если последний камень попал в калах, то игрок ходит снова.\n"
                    "-*Если последний камень попал в пустую лунку принадлежащую ему и противоположная лунка соперника не пуста,то этот камень и все камни из противоположной лунки соперника игрок переносит себе в калах.\n"
                    "-Когда у одного из игроков все лунки пусты (ему нечем ходить), то его соперник переносит все оставшиеся у него в лунках камни в свой калах. Выигрывает тот у кого в калахе будет больше камней.\n"
                    " В случае равенства количества камней - ничья.\n");
                break;
                case 3:
                    printf( "*********************** Клавиши управления ***********************\n"
                    "номер лунки соответствует цифрам на клавиатуре""___1 2 3 4 5 6___""\n"
                    "Для выхода из игры __z__\n"
                    "после ввода нажимаем""___Enter___"" \n"
                    "Верхнее поле игрока (# 2) Нижнее поле игрока (# 1)");

                break;
                case 4:
                    printf("\e[33m*До новых встреч*\e[0m");
                    exit(EXIT_SUCCESS);
            }
        }while(variant!=1||variant!=2||variant!=3||variant!=4);

    }while(variant==2||variant==3);

    return;
}
