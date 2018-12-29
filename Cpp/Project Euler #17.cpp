#include <iostream>
#include <string>

int count(std::string);

int main()
{
	int sum = std::string("onethousand").length();
	for (int i = 0; i < 1000; i++)
		sum += count(std::to_string(i));
	std::cout << sum;
	return 0;
}

int count(std::string h)
{
	if (h == "0")
		return 0;
	int n = std::stoi(h);
	if (h.length() == 1)
	{
		if (n == 1 || n == 2 || n == 6 || n == 10)
			return 3;
		else if (n == 3 || n == 7 || n == 8)
			return 5;
		else
			return 4;
	}
	if (h.length() == 3 && std::stoi(h.substr(1, 2)) >= 20)
		return count(h.substr(0, 1)) + count(h.substr(2, 1)) + 10 + count(h.substr(1, 1) + "0");
	else if (h.length() == 3 && h.substr(1, 2) == "00")
		return count(h.substr(0, 1)) + 7;
	else if (h.length() == 3 && h.substr(1, 1) == "0")
		return count(h.substr(0, 1)) + 10 + count(h.substr(2, 1));
	else if (h.length() == 3)
		return count(h.substr(0, 1)) + 10 + count(h.substr(1, 2));
	if (h.length() == 2)
	{
		if (h.substr(1, 1) == "0")
		{
			if (n == 10)
				return 3;
			else if (n == 20 || n == 30 || n == 80 || n == 90)
				return 6;
			else if (n == 40 || n == 50 || n == 60)
				return 5;
			else
				return 7;
		}
		else if (n < 20)
		{
			if (n == 11 || n == 12)
				return 6;
			else if (n == 13 || n == 14 || n == 19 || n == 18)
				return 8;
			else if (n == 15 || n == 16)
				return 7;
			else
				return 9;
		}
		else
			return count(h.substr(0, 1) + "0") + count(h.substr(1, 1));
	}
}
