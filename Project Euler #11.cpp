#include <iostream>
#include <string>
#include <fstream>

std::ifstream fin("C:\\Users\\profc\\Desktop\\grid.txt");

int main()
{
	int nums[20][20];
	for (int i = 0; i < 20; i++)
	{
		for (int a = 0; a < 20; a++)
			fin >> nums[i][a];
	}
	int maxProd = 0, currProd;
	for (int i = 0; i < 20; i++)
	{
		for (int a = 3; a < 20; a++)
		{
			currProd = nums[i][a] * nums[i][a - 1] * nums[i][a - 2] * nums[i][a - 3];
			if (currProd > maxProd)
				maxProd = currProd;
			currProd = nums[a][i] * nums[a - 1][i] * nums[a - 2][i] * nums[a - 3][i];
			if (currProd > maxProd)
				maxProd = currProd;
		}
	}
	for (int i = 0; i < 17; i++)
	{
		for (int j = 0; j < 17; j++)
		{
			currProd = nums[i][j] * nums[i + 1][j + 1] * nums[i + 2][j + 2] * nums[i + 3][j + 3];
			if (currProd > maxProd)
				maxProd = currProd;
		}
	}
	for (int i = 0; i < 17; i++)
	{
		for (int j = 19; j > 2; j--)
		{
			currProd = nums[i][j] * nums[i + 1][j - 1] * nums[i + 2][j - 2] * nums[i + 3][j - 3];
			if (currProd > maxProd)
				maxProd = currProd;
		}
	}
	std::cout << maxProd;
	return 0;
}
