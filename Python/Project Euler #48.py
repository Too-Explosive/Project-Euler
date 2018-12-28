sum = 0
for i in range(1, 1001):
  sum += pow(i, i)
sum = str(sum)
print(sum[len(sum) - 10:])
