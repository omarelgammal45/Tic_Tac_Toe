#include<iostream>
#include"game.h"
#include<stdlib.h>
using namespace std;
tic_tac::tic_tac()
{
	char g = '1';
	for (int i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			arr[i][j] = g++;
		}
	}
}
int tic_tac::addx(int x)
{
	for (int i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (arr[i][j]-'0' == x)
			{
				arr[i][j] = 'x';
				print();
				return 1;
			}
		}
	}
	print();

	cout << "\nenter x in a valid place: ";
	return 0;
}
int tic_tac::addy(int y)
{
	for (int i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (arr[i][j]-'0' == y)
			{
				arr[i][j] = 'y';
				print();
				return 1;
			}
		}
	}
	print();
	cout << "\nenter y in a valid place: ";
	return 0;
}
void tic_tac::print()
{
	

	for (int i = 0; i < 3; i++)
	{
		cout << ' ';
		for (size_t j = 0; j < 3; j++)
		{
			cout << ' ' << arr[i][j] << ' ';
			if (j != 2)
				cout << " || ";
		}
		cout <<endl<<"             "<< endl;
	}
}
int tic_tac::check()
{
	for (size_t j = 0; j < 3; j++)
	{
		if (arr[0][j] == arr[1][j] && arr[0][j] == arr[2][j])
		{
			if (arr[0][j] == 'x')
				return 1;
			else return 2;
		}
	}
	for (size_t j = 0; j < 3; j++)
	{
		if (arr[j][0] == arr[j][1] && arr[j][0] == arr[j][2])
		{
			if (arr[j][0] == 'x')
				return 1;
			else return 2;
		}
	}
	if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])
	{
		if (arr[0][0] == 'x')
			return 1;
		else return 2;
	}
	if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
	{
		if (arr[1][1] == 'x')
			return 1;
		else return 2;
	}
	return 0;
}
int tic_tac::add(char player)
{
	int place;
	cin >> place;
	while (place < 1 || place>9)
	{
		cout << "\nenter a valid place between 1 and 9\n";
		cin >> place;
	}
	system("CLS");
	if (player == 'x')
		return addx(place);
	else return addy(place);
}