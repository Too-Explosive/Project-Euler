sol = False
num = 28 + 8
count = 8
def count_divs(x):
    sum = 2
    for i in range(2, x):
        if x % i == 0:
            sum += 1
    return sum
while not sol:
    if count_divs(num) >= 500:
        sol = True
    else:
        count += 1
        num += count
print(num)
