#include <iostream>
#include <string>
#include <algorithm>

bool anagram(std::string, std::string);

int main()
{
	bool sol = false;
	int num = 1;
	std::string digits;
	while (!sol)
	{
		digits = std::to_string(num);
		if (anagram(digits, std::to_string(num * 2)) && anagram(digits, std::to_string(num * 3)) && anagram(digits, std::to_string(num * 4)) && anagram(digits, std::to_string(num * 5)) && anagram(digits, std::to_string(num * 6)))
			break;
		num++;
	}
	std::cout << num;
	return 0;
}

bool anagram(std::string first, std::string second)
{
	if (first.length() != second.length())
		return false;
	for (char b : second)
	{
		if (std::find(first.begin(), first.end(), b) == first.end())
			return false;
	}

}
