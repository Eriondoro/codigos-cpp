k = input()

for x in range(1, k-1):
    for y in range(1, k-1):
        for z in range(1, k-1):
            if x+y+z == k:
                cont = cont + 1;

print("%.12f" % cont/216)