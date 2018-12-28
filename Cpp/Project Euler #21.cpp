#include <iostream>
#include <cmath>

int d(int);

int main()
{
	int sum = 0;
	int arr[10000];
	for (int i = 0; i < 10000; i++)
		arr[i] = d(i);
	for (int i = 0; i < 10000; i++)
	{
		if (i != arr[i] && arr[i] < 10000 && arr[arr[i]] == i)
			sum += i;
	}
	std::cout << sum;
	return 0;
}

int d(int n)
{
	int sum = 1;
	for (int i = 2; i < ceil(n / 2) + 1; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	return sum;
}
