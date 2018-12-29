def count(h):
    if h == '0':
        return 0
    n = int(h)
    if len(h) == 1:
        if n == 1 or n == 2 or n == 6 or n == 10:
            return 3
        if n == 3 or n == 7 or n == 8:
            return 5
        if n == 4 or n == 5 or n == 9:
            return 4
    if len(h) == 3 and int(h[1:3]) >= 20:
        return count(h[0]) + count(h[2]) + 10 + count(h[1] + '0')
    elif len(h) == 3 and h[1:3] == "00":
        return count(h[0]) + 7
    elif len(h) == 3 and h[1] == '0':
        return count(h[0]) + 10 + count(h[2])
    elif len(h) == 3:
        return count(h[0]) + 10 + count(h[1:3])
    if len(h) == 2:
        if h[1] == '0':
            if n == 10:
                return 3
            if n == 20 or n == 30 or n == 80 or n == 90:
                return 6
            if n == 40 or n == 50 or n == 60:
                return 5
            if n == 70:
                return 7
        elif int(h) < 20:
            if n == 11 or n == 12:
                return 6
            if n == 13 or n == 14 or n == 19 or n == 18:
                return 8
            if n == 15 or n == 16:
                return 7
            if n == 17:
                return 9
        else:
            return count(h[0] + '0') + count(h[1])
sum = len("onethousand")
for i in range(1000):
    sum = sum + count(str(i))
print(sum)
