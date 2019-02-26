#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main()
{
	std::ifstream fin("C:\\Users\\profc\\OneDrive\\Documents\\Visual Studio 2017\\Projects\\Prime Lister\\Prime Lister\\primes.txt");
	std::vector<int> primes, b;
	int prime, numPrimes = 0, n, prod;
	while (fin >> prime)
	{
		primes.push_back(prime);
		if (prime < 1000)
			b.push_back(prime);
	}
	fin.close();
	for (int i = -1000; i <= 1000; i++)
	{
		for (int j : b)
		{
			n = 0;
			while (std::find(primes.begin(), primes.end(), (n * n) + (i * n) + j) != primes.end())
				n++;
			if (n > numPrimes)
			{
				numPrimes = n;
				prod = i * j;
			}

		}
	}
	std::cout << prod;
	return 0;
}
