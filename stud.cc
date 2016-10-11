#include "stud.hpp"

using namespace std;

// c(5);
int* c(int _length)
{
	int* array;
	array = new int[_length * _length];
	for(int i = 0; i < _length*_length; ++i)
		array[i] = i*i;
	return array;
	// array = [0 1 2 3 4];
}

void del_array(int** _array){
	delete[](*_array);
}

// void c(int _a)
// {
// 	int a = 0;
// 	while(_a--)
// 	{
// 		cout << _a << " ";
// 	}
// 	cout << "\n";
// 	cout << sum(_a, a);
// };

void stud_sum()
{
	int a;
	cout << "Введите 1 аргумент: ";
	cin >> a;
	cout << "\nВведите 2-ой аргумент: ";
	int b;
	cin >> b;
	cout << "\nРезультат операции: " << a + b << "\n";
};

void stud_sub()
{
	int a;
	cout << "Введите 1 аргумент: ";
	cin >> a;
	cout << "\nВведите 2-ой аргумент: ";
	int b;
	cin >> b;
	cout << "\nРезультат операции: " << a - b << "\n";
};

void stud_pow()
{
	int a;
	cout << "Введите 1 аргумент: ";
	cin >> a;
	cout << "\nВведите 2-ой аргумент: ";
	int b;
	cin >> b;
	int c = 1;
	while(b--)
	{
		c *= a;
	}
	cout << "\nРезультат операции: " << c << "\n";
};

