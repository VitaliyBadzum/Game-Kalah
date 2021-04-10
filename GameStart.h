#ifndef GAMESTART_H_INCLUDED
#define GAMESTART_H_INCLUDED


void UserMenu();
void GameStart();
bool CheckField(int *PlayerField);
void CollectInKalah(int *PlayerField);
void GameBoard(int *PlayerField1, int *PlayerField2);
bool PlayerChoice(int PlayerNumber, int *PitNumber, bool CorrectChoice);
bool CheckMove(int *PlayerField,int number_holes);
int PlayerMove(int *PlayerField1,int *PlayerField2,int player,int *pitNumber);


#endif // GAMESTART_H_INCLUDED
