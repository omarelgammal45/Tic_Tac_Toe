#include<iostream>
#include<stdlib.h>
using namespace std;
class tic_tac
{
private:
	char arr[3][3];
public:
	tic_tac();
	int check();
	int add(char);
	int addx(int);
	int addy(int);
	void print();

};
