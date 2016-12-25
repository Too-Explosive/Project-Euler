#include <iostream>

int count_divs(int);

int main()
{
	bool sol = false;
	int num = 28 + 8, count = 8;
	while (!sol)
	{
		if (count_divs(num) >= 500)
			sol = true;
		else
		{
			count++;
			num += count;
		}
	}
	std::cout << num;
	std::cin.get();
	return 0;
}

int count_divs(int x)
{
	int sum = 2;
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
			sum++;
	}
	return sum;
}