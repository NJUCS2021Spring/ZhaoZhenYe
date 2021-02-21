#include<iostream>
#include<cstdlib>
#include<fstream>
#include "appearance.h"
#include"addnew.h"
using namespace std;
int main()
{
	appearance();
	int group_num;
	FILE* fp;
	char file[] = "D:\\mycode\\Project 1\\group_num.txt";
	fopen_s(&fp, file, "r+");
	if (!fp)
	{
		cout << "Open file error!\n";
		exit(0);
	}
	fscanf_s(fp, "%d", &group_num); 
	fclose(fp);
	int choise;
	cin >> choise;
	if (choise == 2)
	{
		addnew(group_num + 1);
		group_num++;
		ofstream out(file);
		out << group_num;
		out.close();
	}
	return 0;
}