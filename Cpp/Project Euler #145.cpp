#include <iostream>
#include <string>
#include <algorithm>

bool reversible(unsigned int);

int main()
{
	unsigned int num = 0;
	for (int i = 0; i < 1000000000; i++)
	{
		if (reversible(i))
			num++;
	}
	std::cout << num;
	return 0;
}

bool reversible(unsigned int x)
{
	std::string a = std::to_string(x);
	if (a.substr(0, 1) == "0" || a.substr(a.length() - 1, 1) == "0" || a.length() == 1)
		return false;
	std::reverse(a.begin(), a.end());
	unsigned int c = std::stoi(a);
	c += x;
	for (int i = 0; i < std::to_string(c).length(); i++)
	{
		if (std::stoi(std::to_string(c).substr(i, 1)) % 2 == 0)
			return false;
	}
	return true;
}
