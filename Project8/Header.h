#pragma once
#include <iostream>
#include <string>
#include <vector>
#include<fstream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
// ФУНКЦИИ ДЛЯ МАССИВА (Чистый С++)

void _Massiv_vivod(int* arr, int razmer) // Функция для вывода массива 
//(для работы с этой функцией надо ввести название массива и его размер) 
{										 // К слову, будет выводить в одной строке в виде { 0, 1, 2, 3} (При необходимости можно изменить на другой вывод)
	cout << "Получаемый массив: ";
	for (int i = 0; i < razmer; i++)
	{
		if (i == 0)
		{
			cout << "{" << arr[i] << ", ";
		}
		else if (i == razmer - 1)
		{
			cout << arr[i] << "}\n";
		}
		else { cout << arr[i] << ", "; }
	}
}


void _Massiv_sort_MinMax(int* arr, int razmer) // Функция для сортировки массива по возрастанию 
//(для работы с этой функцией надо ввести название массива и его размер) 
{											   // К слову, можно использовать вместо неё sort('имямассива'.begin(), 'имямассива'.end()); из библиотеки <algorithm>

	for (size_t i = 0; i < razmer; i++)
	{
		for (size_t k = 0; k < razmer; k++)
		{
			if (arr[i] < arr[k])
			{
				swap(arr[i], arr[k]);
			}
		}
	}
}


void _Massiv_vivod_MinMax(int* arr, int razmer) // Функция для вывода максимального и минимального значение из массива
//(для работы с этой функцией надо ввести название массива и его размер)
{
	int Max = arr[0], Min = arr[0];
	for (size_t i = 0; i < razmer; i++)
	{
		if (arr[i] > Max)
		{
			Max = arr[i];
		}
		else if (arr[i] < Min)
		{
			Min = arr[i];
		}
	}
	cout << "Наименьшее в массиве: " << Min << endl;
	cout << "Наибольшее в массиве: " << Max << endl;
}


int _Massiv_sum(int* arr, int razmer) // Функция, которая возвращает сумму всех значений из массива
//(для работы с этой функцией надо ввести название массива и его размер)
{
	int sum = 0;
	for (size_t i = 0; i < razmer; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int _Massiv_sredn(int* arr, int razmer) // Функция, которая возвращает среднее значение массива
//(для работы с этой функцией надо ввести название массива и его размер)
{
	return _Massiv_sum(arr, razmer) / razmer;
}


void _Massiv_povtor(int* arr, int razmer) // Функция для вывода повторных значений из массива
{										   //(для работы с этой функцией надо ввести название массива и его размер)										   
	int c;
	const int n = 1000;
	int masiv2[n] = {};
	for (int i = 0; i <= razmer - 1; i++)
	{
		c = arr[i];
		for (int j = i + 1; j <= razmer - 1; j++)
		{
			if (arr[j] == c) { masiv2[i] = c; }
		}
	}
	for (int i = 0; i <= razmer - 1; i++)
	{
		for (int j = i + 1; j <= razmer - 1; j++)
		{
			if (masiv2[j] == masiv2[i]) { masiv2[i] = 0; }
		}
	}
	for (int j = 0; j <= n - 1; j++)
	{
		if (masiv2[j] != 0)
		{
			cout << "Повторяещиеся значение в массиве: " << masiv2[j] << endl;
		}
	}
	cout << "Все остальные значения этого массива уникальны и не повторятся\n";
}


void _Massiv_to_Vector(int* arr, int razmer, vector <int>& vect) // Функция для перевода значений из массива в вектор
// (для работы с функцией надо ввести название массива, его размер и название вектора)
{
	for (int i = 0; i < razmer; i++)
	{
		vect.push_back(arr[i]);
	}
}

// ФУНКЦИИ ДЛЯ ВЕКТОРА (Библиотека <vector>)

void _Vector_vivod(vector<int>vector) // Функция для вывода вектора 									  
//(для работы с этой функцией надо ввести название вектора) 									  
// К слову, будет выводить в одной строке в виде { 0, 1, 2, 3} (При необходимости можно изменить на другой вывод)
{
	cout << "Получаемый вектор: ";
	for (int i = 0; i < vector.size(); i++)
	{
		if (i == 0)
		{
			cout << "{" << vector[i] << ", ";
		}
		else if (i == vector.size() - 1)
		{
			cout << vector[i] << "}\n";
		}
		else { cout << vector[i] << ", "; }
	}
}


void _Vector_vivod_MinMax(vector<int> vector) // Функция для вывода максимального и минимального значение из вектор	
{										      //(для работы с этой функцией надо ввести название вектора)
	int Max = vector[0], Min = vector[0];
	for (size_t i = 0; i < vector.size(); i++)
	{
		if (vector[i] > Max)
		{
			Max = vector[i];
		}
		else if (vector[i] < Min)
		{
			Min = vector[i];
		}
	}
	cout << "Наименьшее в векторе: " << Min << endl;
	cout << "Наибольшее в векторе: " << Max << endl;
}


void _Vector_sort_MinMax(vector<int> vector) // Функция для сортировки массива по возрастанию 
//(для работы с этой функцией надо ввести название вектора) 
{											 // К слову, можно использовать вместо неё sort('имямассива'.begin(), 'имямассива'.end()); из библиотеки <algorithm>

	for (size_t i = 0; i < vector.size(); i++)
	{
		for (size_t k = 0; k < vector.size(); k++)
		{
			if (vector[i] < vector[k])
			{
				swap(vector[i], vector[k]);
			}
		}
	}
}


int _Vector_sum(vector<int> vector) // Функция, которая возвращает сумму всех значений из вектора
//(для работы с этой функцией надо ввести название вектора)
{
	int sum = 0;
	for (int i = 0; i < vector.size(); i++)
	{
		sum += vector[i];
	}
	return sum;
}
int _Vector_sredn(vector<int> vector) // Функция, которая возвращает среднее значение вектора
//(для работы с этой функцией надо ввести название вектора)
{
	return _Vector_sum(vector) / vector.size();
}


void _Vector_povtor(vector<int> vect) // Функция для вывода повторных значений из вектора
{										   //(для работы с этой функцией надо ввести название вектора)										   
	int c;
	vector<int>vector2(1000);
	for (int i = 0; i <= size(vect) - 1; i++)
	{
		c = vect[i];
		for (int j = i + 1; j <= size(vect) - 1; j++)
		{
			if (vect[j] == c) { vector2[i] = c; }
		}
	}
	for (int i = 0; i <= size(vect) - 1; i++)
	{
		for (int j = i + 1; j <= size(vect) - 1; j++)
		{
			if (vector2[j] == vector2[i]) { vector2[i] = 0; }
		}
	}
	for (int j = 0; j <= size(vector2) - 1; j++)
	{
		if (vector2[j] != 0)
		{
			cout << "Повторяещиеся значение в векторе: " << vector2[j] << endl;
		}
	}
	cout << "Все остальные значения этого вектора уникальны и не повторятся\n";
}


void _Vector_to_Massiv(vector<int>vect, int* arr)// Функция для переноса значений из вектора в массив
{												// (для работы с функцией надо вввести название вектора и название массива, который должен быть создан через динам.память)

	for (size_t i = 0; i < vect.size(); i++)
	{
		arr[i] = vect[i];
	}
}


// ПРОЧЕЕ 

int _Kolvo(int n)
{
	if (n == 0) { return 1; }
	return (int)log10(n) + 1;
}

void _sortPoKolvu(int* arr, int razmer)
{
	for (size_t i = 0; i < razmer - 1; i++)
	{
		for (size_t j = 0; j < razmer - i - 1; j++)
		{
			if (_Kolvo(arr[j]) > _Kolvo(arr[j + 1]))
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
int COUNT(string s)
{
	int NumL = 0;
	string stroka;
	ifstream fin;
	fin.open(s);
	while (getline(fin, stroka));
	{
		if (!stroka.empty())
		{
			NumL++;
		}
	}
	return NumL;
}

struct Student
{
	string f;
	string i;
	string o;
	char pol;
	int vozr;
	float rost;

};
int Stroka(string s)
{
	int NumL = 0;
	string stroka;
	ifstream fin;
	fin.open(s);
	while (getline(fin, stroka))
	{
		if (!stroka.empty())
		{
			NumL++;
		}
	}
	return NumL;
}

int Probeli(string s)
{
	int NumL = 0;
	ifstream fin;
	fin.open(s);
	while (!fin.eof())
	{
		char  ch; fin.get(ch);
		if (ch == ' ')
		{
			NumL++;
		}
	}
	return NumL;
}
