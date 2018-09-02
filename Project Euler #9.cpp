#include <iostream>

int main()
{
	for (int a = 3; a < 1000; a++)
	{
		for (int b = a + 1; b < 1000; b++)
		{
			if ((int)sqrt((a * a) + (b * b)) == sqrt((a * a) + (b * b)) && a + b + sqrt((a * a) + (b * b)) == 1000)
				std::cout << a * b * (int)sqrt((a * a) + (b * b));
		}
	}
	return 1;
}
