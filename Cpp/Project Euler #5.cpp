#include <iostream>

bool solved(int);

int main()
{
	int num = 2520;
	while (!solved(num))
		num += 5;
	std::cout << num;
	return 0;
}

bool solved(int num)
{
	for (int i = 2; i < 21; i++)
	{
		if (num % i != 0)
			return false;
	}
	return true;
}
