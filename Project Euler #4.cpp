#include <iostream>
#include <string>

bool isPalindrome(std::string);

int main()
{
	int sol = 0;
	for (int i = 999; i > 99; i--)
	{
		for (int a = 999; a > 99; a--)
		{
			if ((isPalindrome(std::to_string(i * a))) && (i * a > sol))
				sol = i * a;
		}
	}
	std::cout << sol;
	return 0;
}

bool isPalindrome(std::string x)
{
	std::string b = "";
	for (int i = x.length() - 1; i >= 0; i--)
		b.push_back(x[i]);
	if (b == x)
		return true;
	return false;
}