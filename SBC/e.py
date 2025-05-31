def mdc(a, b):
    while b != 0:
        a, b = b, a % b
    return a


y = int(input())
k = int(input())
x = 1

while k > 0:
    d = mdc(x, y)
    if d == 1:
        x += k
        break
    else:
        x += d
        k -= 1

print(x)
