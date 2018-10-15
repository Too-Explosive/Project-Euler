#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::ifstream fin("C:\\Users\\profc\\Downloads\\p042_words.txt");

int main()
{
	std::vector<std::string> words;
	std::string eh, alphaString("0ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	std::vector<int> triangleNums;
	int* values;
	fin >> eh;
	fin.close();
	for (int i = 0; i < eh.length(); i++)
	{
		if (eh[i] == '"')
			eh = eh.substr(0, i) + eh.substr(i + 1);
		if (eh[i] == ',')
			eh = eh.substr(0, i) + " " + eh.substr(i + 1);
	}
	while (eh.find_first_of(' ') != -1)
	{
		words.push_back(eh.substr(0, eh.find_first_of(' ')));
		eh = eh.substr(eh.find_first_of(' ') + 1, std::string::npos);
	}
	values = new int[words.size()];
	int max = 0, num = 1, n = 1;
	for (int i = 0; i < words.size(); i++)
	{
		values[i] = 0;
		for (char a : words.at(i))
			values[i] += alphaString.find_first_of(a);
		if (values[i] > max)
			max = values[i];
	}
	while (num <= max)
	{
		triangleNums.push_back(num);
		n++;
		num = ((n + 1) * n) / 2;
	}
	num = 0;
	for (int i = 0; i < words.size(); i++)
	{
		if (std::find(std::begin(triangleNums), std::end(triangleNums), values[i]) != std::end(triangleNums))
			num++;
	}
	fin.close();
	delete[] values;
	std::cout << num;
	return 0;
}
