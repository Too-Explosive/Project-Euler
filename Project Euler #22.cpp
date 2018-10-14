#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

std::ifstream fin("C:\\Users\\profc\\Downloads\\p022_names.txt");

int main()
{
	std::vector<std::string> names;
	std::string name;
	fin >> name;
	fin.close();
	for (int i = 0; i < name.length(); i++)
	{
		if (name[i] == '"')
			name = name.substr(0, i) + name.substr(i + 1);
		if (name[i] == ',')
			name = name.substr(0, i) + " " + name.substr(i + 1);
	}
	while (name.find_first_of(' ') != -1)
	{
		names.push_back(name.substr(0, name.find_first_of(' ')));
		name = name.substr(name.find_first_of(' ') + 1, std::string::npos);
	}
	names.push_back(name);
	std::sort(names.begin(), names.end());
	int sum = 0, currSum = 0;
	for (int i = 0; i < names.size(); i++)
	{
		for (char a : names[i])
			currSum += std::string("0ABCDEFGHIJKLMNOPQRSTUVWXYZ").find_first_of(a);
		sum += currSum * (i + 1);
		currSum = 0;
	}
	std::cout << sum;
	return 0;
}
