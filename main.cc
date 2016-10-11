#include "math.hpp"
#include "stud.hpp"

using namespace std;

#define LIST_LENGTH 5

int main(int argc, char** argv)
{
	// set_locale(0, 'RU');
	// const int LIST_LENGTH = 5;
	int* list;
	list = c(LIST_LENGTH);
	for(int i = 0; i < LIST_LENGTH; ++i)
		cout << list[i] << " ";
	cout << "\n";
	return 0;

	char choice;
	do{
		cout << "Меню:" << "\n";
		cout << "1 - Сложение" << "\n";
		cout << "2 - Вычитание" << "\n";
		cout << "3 — Возведение в степень" << "\n";
		cout << "--" << "\n";
		cout << "0 - Выход" << "\n";
		cin >> choice;
		switch(choice){
			case '1':
				stud_sum();
			break;
			case '2':
				stud_sub();
			break;
			case '3':
				stud_pow();
			break;
			default:;
		}
	}while(choice != '0');

	/*
	int a, b;
	a = 1;
	b = 1;
	cout << sum(a,b) << "\n"; // 3
	cout << a << " " << b << "\n"; // 1 1
	cout << sum(&a, &b) << "\n"; // 3
	cout << a << " " << b << "\n";// 2 1
	c(a);
		int n = 10;
		std::cout<< 'a' << a << "\n";
		// std::cout << "n=" << n << "\n";
		std::cout << "&n=" << &n << "\n";
		int* k;
		std::cout << "&k=" << k << "\n";
		k = &n;
		std::cout << "&k=" << k << "\n";
		*k = 2;
		n=5;
		std::cout << "n=" << n << "\n";
	*/
	return 0;
}
