num = 0
sum = 0
while num <= 1000
	if num % 5 == 0
		sum = sum + num
	end
	if num % 3 == 0
		sum = sum + num
	end
	if num % 5 == 0 and num % 3 == 0
		sum = sum - num
	end
	num = num + 1
end
puts sum
