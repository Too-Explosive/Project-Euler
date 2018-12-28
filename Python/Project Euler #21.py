from math import ceil
def d(n):
    sum = 1
    for i in range(2, ceil(n / 2) + 1):
        if n % i == 0:
            sum += i
    return sum
list = []
sum = 0
for i in range(0, 10000):
    list.append(d(i))
for i in range(10000):
    if (i != list[i] and list[i] < 10000 and list[list[i]] == i):
        sum += i
print(sum)
