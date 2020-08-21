#include<iostream>
using namespace std;
#include"game.h"
#include<stdlib.h>
int main(void)
{
label1:
	system("CLS");
	tic_tac trial;
	
	int counter = 0;
	trial.print();
	int ref = trial.check();
	char player1;
	char player2;
	cout << "\nAttention please!!\nEvery player should choose his character\nSo player1 what do you want? \nenter x or y: ";
	cin >> player1;
	while (player1 != 'x' && player1 != 'y')
	{
		cout << "\nenter valid char\n";
			cin >> player1;
	}
	if (player1 == 'x')
		player2 = 'y';
	else
	{
		player2 = 'x';
	}

	while (true&&++counter)
	{
		
		ref = trial.check();

		if (ref==2)
		{
			(player1 == 'y') ? cout << "\nplayer1" : cout << "\nplayer2"; cout << " is the winner\n";
			break;
	    }
		cout << "\nplayer1 "<<player1<<" please enter a place\n";
		while (!trial.add(player1));
		ref = trial.check();
		if (ref == 1)
		{
			 (player1 == 'x') ? cout << "\nplayer1" : cout << "\nplayer2"; cout << " is the winner\n";
			break;
		}
		if (ref == 0&&counter==5)
		{
			 cout <<"\nunfortunatly it is a draw :(\n";
			break;
		}
		cout << "\nplayer2 " << player2 << " please enter a place\n";
		while (!trial.add(player2));
	}
	cout << "\nDo you want to play again?\nenter 1 to continue or 0 to exit: ";
	int choise;
	cin >> choise;
	while (choise != 1 && choise != 0)
	{
		cout << "\nenter a valid choise: ";
		cin >> choise;
	}
	if (choise == 1)
		goto label1;
	return 0;
}
