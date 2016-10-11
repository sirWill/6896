#include "math.hpp"

using namespace std;

int sum(int &_a, int &_b)
{
	_a++;
	return _a+_b;
};

int sum(int* _a, int* _b)
{
	(*_a)++;
	return *_a + *_b;
};
