#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int sin_arr[] = { 0, 1, 2, 3, 4, 3, 2, 1 };
int cos_arr[] = { 2, 1, 0, 1, 2, 3, 4, 3 };
char m[100][200] = { '0' };
string str;

void printer();
void void_arr_maker();
void sin_cos_maker(int arr[]);
void log_maker();
void exp_maker();

int main()
{
	system("chcp 1251>NULL");
	cout << "Введите строку:\n";
	getline(cin, str);
	void_arr_maker();
	cout << "График синуса:\n";
	sin_cos_maker(sin_arr);
	printer();
	void_arr_maker();
	cout << "График косинуса:\n";
	sin_cos_maker(cos_arr);
	printer();
	void_arr_maker();
	cout << "График логарифма:\n";
	log_maker();
	printer();
	void_arr_maker();
	cout << "График экспоненты:\n";
	exp_maker();
	printer();
	return 0;
}

void printer()
{
	cout << '\n';
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < size(str); j++)
			cout << m[i][j] << " ";
		cout << '\n';
	}
	cout << '\n';
}


void void_arr_maker()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < size(str); j++)
		{
			m[i][j] = ' ';
		}
	}
}

void sin_cos_maker(int arr[])
{
	for (int i = 0; i < size(str); i++)
	{
		int j = arr[i % 8];
		m[j][i] = str[i];
	}
}

void log_maker()
{
	int log_arr[11] = { 4, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1 };
	for (int i = 0; i < 11; i++)
	{
		int j = log_arr[i];
		m[j][i] = str[i];
	}
	for (int i = 11; i < size(str); i++)
	{
		m[0][i] = str[i];
	}
}

void exp_maker()
{
	int exp_y_arr[] = { 4, 3, 2, 1, 0 };
	int exp_x_arr[] = { 0, 1, 2, 2, 3 };
	for (int i = 0; i < 5; i++)
	{
		int j = exp_y_arr[i];
		int k = exp_x_arr[i];
		m[j][k] = str[i];
	}
}

//Cтрока для проверки работоспособности этой праграммы