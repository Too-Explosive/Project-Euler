#include <iostream>
#include <cmath>
#include <string>

int main()
{
	int sum = 0;
	std::string a = std::to_string(pow(2, 1000));
	for (int i = 0; i < a.length(); i++)
		sum += (int)a[i] - '0';
	std::cout << sum + 2;
	return 0;
}
