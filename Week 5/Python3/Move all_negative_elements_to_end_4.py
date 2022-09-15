n = int(input())
lst = [int(x) for x in input().split()]
postive_array = []
negative_array = []
if n == len(lst):
    for i in lst:
        if i < 0:
            negative_array.append(i)
        else:
            postive_array.append(i)
out_lst = postive_array+negative_array
for i in out_lst:
    print(i, end=" ")
