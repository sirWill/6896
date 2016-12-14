// 1. Дан массив A = {2, -4, 8, 7, -13, 21} и массив B = {-4, 7, 13, 0, 5, 20}.
// 	1.a Вывести элементы массива C = пересечению массива A и B.
// 		Ответ: C={-4, 7}
// 	1.b Вывести элементы массива D = объединение массивов A и B без пересечения массивов A и B.
// 		Ответ: один из возможных вариантов D={2, -4, 8, 7, -13, 21, 13, 0, 5, 20}
#include <iostream>
using namespace std;
int main()
{
	int A[] = {2, -4, 8, 7, -13, 21};
	int B[] = {-4, 7, 13, 0, 5, 20};
	int C[6] = {0};
	// a
	int k = 0;
	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			if(A[i]==B[j]){
				C[k++] = A[i];
				cout << A[i] << " ";
			}
		}
	}
	// C = {-4, 7, 0,0,0,0};
	// k = 2
	cout << "\n";
	// b
	int D[12];
	for (int i = 0; i < 6; ++i)
	{
		D[i]=A[i];
	}
	bool skip = false;
	int counter = 0;
	for (int i = 0; i < 6; ++i)
	{
		skip = false;
		for (int j = 0; j < 6; ++j)
		{
			if(D[j] == B[i]) skip = true;
		}
		if(skip) continue;
		D[6+counter] = B[i];
		counter++;
	}
	counter+=6;
	for (int i = 0; i < counter; ++i)
	{
		cout << D[i] << " ";
	}
	cout << "\n";
	return 0;
}
