# Not Working will resolve it
n, req_sum = (int(x) for x in input().split())
lst = [int(x) for x in input().split()]
if 1 <= n and n <= 10**5 and n == len(lst):
    i = j = 0
    sum = 0
    for i in range(n):
        prev = lst[i]
        if 1 <= lst[i] and lst[i] <= 10**9:
            for j in range(i, n):
                if prev < lst[j]:
                    sum += lst[j]
                    break
                else:
                    sum = 0
    print(sum)
