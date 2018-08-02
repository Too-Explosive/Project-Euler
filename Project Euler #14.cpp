#include <iostream>

unsigned long long int collatzLength(unsigned long long int);

int main()
{
	unsigned long long int max = 0, current = 0;
	int givesMax;
	for (int i = 0; i < 1000000; i++)
	{
		current = collatzLength(i);
		if (current > max)
		{
			max = current;
			givesMax = i;
		}
	}
	std::cout << givesMax;
	return 0;
}

unsigned long long int collatzLength(unsigned long long int num)
{
	if (num < 1)
		return 2;
	int steps = 0;
	while (num != 1)
	{
		if (num % 2 == 0)
			num /= 2;
		else
			num = (3 * num) + 1;
		steps++;
	}
	return steps;
}
