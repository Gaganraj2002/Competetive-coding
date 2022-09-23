n, req_sum = (int(x) for x in input().split())
lst = [int(x) for x in input().split()]
for i in range(n):
    c = 0
    for j in range(i, n):
        c += lst[j]
        if c == req_sum:
            print(i+1, j+1)
            break
    if (c == req_sum):
        break
