fn main()
{
	let mut fib1 = 0;
	let mut fib2 = 1;
	let mut temp;
	let mut sum = 0;
	while fib1 < 4000000
	{
		if fib1 % 2 == 0
		{
			sum = sum + fib1;
		}
		temp = fib1 + fib2;
		fib1 = fib2;
		fib2 = temp;
	}
	print!("{}", sum);
}
