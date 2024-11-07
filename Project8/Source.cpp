#include <iostream>
#include <string>
#include<windows.h>
#include<fstream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include"Header.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ofstream fout;
	//fout.open("file.txt");
	//fout.close();
	ifstream fin;
	fin.open("file.txt");
	int a1 = Stroka("file.txt");
	int b1 = Probeli("file.txt");
	int c1 = a1 + b1;
	cout << "Stroka = " << c1 << endl;


	vector<string> stud_vect;
	for (size_t i = 0; i < a1 + b1; i++)
	{
		string f;
		fin >> f;
		stud_vect.push_back(f);
	}
	fin.close();
	
	for (size_t i = 0; i < c1; i++)
	{
		if (i % 6 == 0)
		{
			cout << endl;
		}
		cout <<left<< setw(15)<< stud_vect[i]<< "| ";
	}
	
	vector<string> get_stud;
	for (size_t i = 0; i < a1; i++)
	{
		fin.open("student.txt");
		string s;
		getline(fin, s);
		get_stud.push_back(s);

	}

	string* array = new string[c1];
	int N = 6;
	for (int i = N - 2; i < c1; i = i += N)
	{
		array[i] = stud_vect[i];
	}

	for (size_t i = 0; i < c1; i++)
	{
		cout << array[i] << " ";
	}
}