bin_li = [int(x, 2) for x in input().split(",")]
st = ''
for i in bin_li:
    if i % 5 == 0:
        st += bin(i)[2:]+','
print(st[:-1])
