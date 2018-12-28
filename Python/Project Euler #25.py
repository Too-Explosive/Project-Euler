num1 = 1
num2 = 1
index = 2
while len(str(num2)) < 1000:
    next = num2 + num1
    num1 = num2
    num2 = next
    index += 1
print(index)
