n = int(input())
arr = [int(x) for x in input().split()]
output = []
for i in range(n):
    product = 0
    if i == 0:
        product = arr[i]*arr[i+1]
    elif i == (n-1):
        product = arr[i - 1] * arr[i]
    else:
        product = arr[i - 1] * arr[i + 1]
    output.append(product)
for i in output:
    print(i, end=" ")
