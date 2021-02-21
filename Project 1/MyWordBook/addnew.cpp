#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct word
{   
    string example;
    char content[20];
    char meaning[20];
};
void addnew(int group_num)
{
    word new_word;
    cin >> new_word.content >> new_word.meaning;
    char F_PATH[80];
    sprintf_s(F_PATH, "D:\\mycode\\Project 1\\%d.txt", group_num);
    ofstream out(F_PATH);//fp = fopen(F_PATH, "w");  //创建文件
    out << new_word.content << " " << new_word.meaning;
    out.close();
}