#include <fstream>
#include <vector>
using namespace std;

bool isPrime(int num);
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

//Tells if an integer as a prime number
//Param: An integer, num, to be tested
//Return: A boolean value, true if num is prime, otherwise false
bool isPrime(int num)
{
	if (num < 2)
		return false;
	else if (num == 2)
		return true;
	else
	{
		for (int i = 2; i < (int)sqrt(num) + 1; i++)
		{
			if (num % i == 0)
				return false;
		}
	}
	return true;
}