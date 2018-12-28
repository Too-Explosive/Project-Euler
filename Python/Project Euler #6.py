i = 1
sum = 0
um = 0
while (i < 101):
    sum = sum + i
    i = i + 1
sum = sum**2
i = 1
while(i < 101):
    um = um + i**2
    i = i + 1
print(sum - um)
