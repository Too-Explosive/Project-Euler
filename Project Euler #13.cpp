#include <iostream>
#include <fstream>
#include <string>

std::ifstream fin("c:\\users\\profc\\onedrive\\documents\\visual studio 2017\\projects\\project euler\\project euler\\bignums.txt");

int main()
{
	int sum = 0, carry = 0;
	std::string nums[100];
	std::string ans("");
	for (int i = 0; i < 100; i++)
		fin >> nums[i];
	fin.close();
	for (int i = 1; i <= 50; i++)
	{
		for (std::string num : nums)
		{
			sum += num[50 - i] - '0';
			while (sum >= 10)
			{
				sum -= 10;
				carry++;
			}
		}
		ans = std::to_string(sum) + ans;
		sum = carry;
		carry = 0;
	}
	ans = std::to_string(sum) + ans;
	std::cout << ans.substr(0, 10);
	return 1;
}
