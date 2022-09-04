# Issue with the problem statement, 1 out of 2 test cases passed
def checkConsecutive(l):
    dif_ = sorted(l)[1]-sorted(l)[0]
    return sorted(l) == list(range(min(l), max(l)+1, dif_))


li = [int(x) for x in input().split(",")]
if checkConsecutive(li):
    out = [x*x for x in li if x % 2 != 0]
    st = ""
    for i in out:
        st += str(i)+","
    st = st[:-1]
    print(st)


#li = [int(x) for x in input().split(",")]
#st = ''
# for i in range(len(li)+1):
#    if i % 2 != 0:
#        st += str(i*i)+","
#st = st[:-1]
# print(st)
