#include<fstream>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	string keyword[]={"#" ,"include" ,"main" ,"int" ,"float" ,"double" ,"char" ,"string" ,"if" ,"else" ,"while" ,"do" ,"for" ,"break" ,"continue" ,"return"}; 
	ifstream in;
	in.open("E://C++/a.txt");
	string s;
	while(getline(in,s))//���ж�ȡ���ݲ�����s�У�ֱ������ȫ����ȡ
	{
		for(int i=0;i<s.length();i++)//����ַ�����ɨ�� 
		{
			
		}
	}
	
}
