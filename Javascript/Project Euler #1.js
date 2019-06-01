var sum = 0;
for (var i = 3; i < 1000; i += 3)
	sum += i;
for (var j = 5; j < 1000; j += 5)
	sum += j;
for (var b = 15; b < 1000; b += 15)
	sum -= b;
console.log(sum);
