def isPalindrome(x):
    b = x[::-1]
    if b == x:
         return True
    return False
sol = 0
for a in range(99, 999)[::-1]:
    for q in range(99, 999)[::-1]:
        if isPalindrome(str(a * q)) and a * q > sol:
                        sol = q * a
print(sol)
