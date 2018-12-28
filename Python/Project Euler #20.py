prod = 100
for i in range(1, 100):
    prod *= i
sum = 0
for i in range(len(str(prod))):
    sum += int(str(prod)[i])
print(sum)
