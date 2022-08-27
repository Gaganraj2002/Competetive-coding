n = int(input())
for i in range(1, n+1):
    if i % 7 != 0 and ("7" not in str(i)):
        print(i, end=" ")
