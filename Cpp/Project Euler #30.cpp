#include <iostream>
#include <string>
#include <cmath>
#include <climits>

int main()
{
	unsigned long long int number = 10, sum = 0, currSum = 0;
	while (number < ULLONG_MAX)
	{
		for (char digit : std::to_string(number))
			currSum += pow((int)digit - '0', 5);
		if (currSum == number)
		{
			sum += number;
			std::cout << "New sum: " << sum << '\n';
		}
		currSum = 0;
		number++;
	}
	return 0;
}
