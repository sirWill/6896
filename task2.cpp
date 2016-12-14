#include <iostream>

using namespace std;

int main()
{
	// min, max, avg, count even elements
	int min = 0, max = 0, sum = 0, count = 0, count_even = 0;
	int in;

	while(1)
	{
		cin >> in;
		if(in == 0)
			break;
		if(min == 0)
			min = in;
		if(max == 0)
			max = in;
		
		if(in < min)
			min = in;
		if(in > max)
			max = in;

		sum+=in;
		count++;
		if( in % 2 == 0 ) // !(in & 1) 
			count_even++;
	};

	cout << "Min = " << min << "\n";
	cout << "Max = " << max << "\n";
	cout << "Avg = " << float(sum)/float(count) << "\n";
	cout << "Evens = " << count_even << "\n";
	return 0;
}