#include <iostream>
#include <fstream>
#include <vector>

int main()
{
	std::ifstream file("C:\\Users\\profc\\OneDrive\\Documents\\Visual Studio 2017\\Projects\\Prime Lister\\Prime Lister\\primes.txt");
	std::vector<unsigned int> possible;
	int num;
	while (file >> num)
		possible.push_back(num);
	for (int i = possible.size() - 1; i >= 0; i--)
	{
		if (600851475143 % possible.at(i) == 0)
		{
			std::cout << possible.at(i);
			break;
		}
	}
	file.close();
	return 0;
}
