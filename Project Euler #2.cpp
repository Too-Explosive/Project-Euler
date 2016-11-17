#include <iostream>

int main() {
	int fib1 = 0, fib2 = 1, temp, sum = 0;
	while(fib1 < 4000000)
	{
	    if(fib1 % 2 == 0)
	        sum = sum + fib1;
	    temp = fib1 + fib2;
	    fib1 = fib2;
	    fib2 = temp;
	}
	std::cout << sum;
	return 0;
}
