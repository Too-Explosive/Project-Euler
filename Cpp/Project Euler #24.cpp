#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> createPermutes(std::string);

int main()
{
	std::cout << createPermutes("0123456789").at(999999);
	return 0;
}

std::vector<std::string> createPermutes(std::string feh)
{
	std::vector<std::string> vars;
	if (feh.length() == 2)
	{
		vars.push_back(feh);
		vars.push_back(feh.substr(1, 1) + feh.substr(0, 1));
	}
	else
	{
		for (int l = 0; l < feh.length(); l++)
		{
			std::vector<std::string> peh = createPermutes(feh.substr(0, l) + feh.substr(l + 1));
			for (int i = 0; i < peh.size(); i++)
				vars.push_back(feh.substr(l, 1) + peh.at(i));
		}
	}
	return vars;
}
