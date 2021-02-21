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
    char F_PATH[80];
    char reason[20];
    sprintf_s(F_PATH, "D:\\mycode\\Project 1\\%d.txt", group_num);
    ofstream out(F_PATH);//fp = fopen(F_PATH, "w");  //创建文件
    cout << "------------------------------------------------------------------------------"<<endl;//78
    cout << "分组ID: " << group_num<<endl;
    cout << "请输入分组依据：";
    cin >> reason;
    out << reason << endl;
    for(int i=1;;i++)
    {
    cout << "请输入组内单词：";
    word new_word;
    cin >> new_word.content;
    out << new_word.content << endl;
    cout << "是否继续输入单词？(y/n)" << endl;
    char anser;
    cin >> anser;
    if (anser == 'n') break;
    }
    out.close();
}