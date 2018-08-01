#include <iostream>
#include <fstream>

int main()
{
	unsigned long long int sum = 0, num = 0;
	std::ifstream file("C:\\Users\\profc\\OneDrive\\Documents\\Visual Studio 2017\\Projects\\Prime Lister\\Prime Lister\\primes.txt");
	while (num < 2000000)
	{
		sum += num;
		file >> num;
	}
	std::cout << sum;
	file.close();
	return 0;
}
