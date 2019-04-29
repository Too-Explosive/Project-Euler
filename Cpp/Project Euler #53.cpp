#include <iostream>

double fact(int);

int main()
{
	int count = 0;
	for (int n = 23; n < 101; n++)
	{
		for (int r = 1; r <= n; r++)
			if (fact(n) / (fact(r) * fact(n - r)) > 1000000)
				count++;
	}
	std::cout << count;
	return 0;
}

double fact(int num)
{
	if (num == 0)
		return 1;
	double prod = num;
	for (int i = 2; i < num; i++)
		prod *= i;
	return prod;
}
