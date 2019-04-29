def fact(num):
    if num == 0:
        return 1
    prod = num
    for i in range(2, num):
        prod *= i
    return prod
def select(n, r):
    return fact(n) / (fact(r) * fact(n - r))
count = 0
for i in range(23, 101):
    for j in range(1, i + 1):
        if select(i, j) > 1000000:
            count += 1
print(count)
