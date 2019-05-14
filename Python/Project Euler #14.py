def collatzLength(num):
    if num < 1:
        return 2
    steps = 0
    while num != 1:
        if num % 2 == 0:
            num /= 2
        else:
            num = (3 * num) + 1
        steps += 1
    return steps
max = 0
current = 0
givesMax = 0
for i in range(1000000):
    current = collatzLength(i)
    if current > max:
        max = current
        givesMax = i
print(givesMax)
