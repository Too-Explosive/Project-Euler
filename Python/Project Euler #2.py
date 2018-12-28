f = [1, 1]
sum = 0
while f[1] < 4000000:
    x = f[1] + f[0]
    f[0] = f[1]
    f[1] = x
    if f[1] % 2 == 0:
        sum = sum + f[1]
print(sum)
