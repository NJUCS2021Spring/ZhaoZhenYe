#include<iostream>
#include "appearance.h"
#include"addnew.h"
using namespace std;
int main()
{
	appearance();
	int group_num = 0;
	int choise;
	cin >> choise;
	if (choise == 2)
		addnew(group_num + 1);
	return 0;
}