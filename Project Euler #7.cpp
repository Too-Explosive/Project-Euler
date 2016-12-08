#include <iostream>

bool isPrime(int);

int main()
{
	int counter = 1, p = 2;
	while (counter <= 10001)
	{
		if (isPrime(p))
			counter++;
		p++;
	}
	std::cout << p - 1;
	std::cin.peek();
	return 0;
}

bool isPrime(int x)
{
	if (x == 2)
		return true;
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}