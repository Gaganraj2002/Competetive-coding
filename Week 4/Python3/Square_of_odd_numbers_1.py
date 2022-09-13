li = [int(x) for x in input().split(",")]
st = ''
n = 0
while n < len(li):
    if (n == 0 and (li[n] % 2) != 0):
        s = li[n]*li[n]
        st += str(s)+","
    elif li[n] % 2 != 0:
        s = li[n]*li[n]
        st += str(s)+","
    n += 1
st = st[:-1]
print(st)
