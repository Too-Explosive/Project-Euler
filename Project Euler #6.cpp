#include <iostream>
#include <cmath>

int main()
{
	int i = 1, sum = 0, um = 0;
	while (i < 101)
	{
		sum += i;
		i++;
	}
	sum = pow(sum, 2);
	i = 1;
	while (i < 101)
	{
		um += pow(i, 2);
		i++;
	}
	std::cout << sum - um;
	std::cin.peek();
	return 0;
}