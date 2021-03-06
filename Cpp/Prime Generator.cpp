#include <fstream>
#include <vector>
using namespace std;

ofstream fout;

int main()
{
	fout.open("primes.txt");
	vector<bool> nums(INT_MAX, true);
	nums[0] = false;
	nums[1] = false;
	for (int i = 2; i < INT_MAX; i++)
	{
		if (!nums.at(i))
			continue;
		for (unsigned long long int j = 2; j * i < INT_MAX; j++)
		{
			if (j <= 1 || j * i < j || j * i < i || j * i >= INT_MAX)
				break;
			if (j * i < ULLONG_MAX && j * i >= 0)
				nums.at(j * i) = false;
		}
	}
	for (int i = 0; i < INT_MAX; i++)
	{
		if (nums.at(i) == true)
			fout << i << '\n';
	}
	fout.close();
	return 1;
}
