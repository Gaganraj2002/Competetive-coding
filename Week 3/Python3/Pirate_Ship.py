gold, pirates = [int(x) for x in input().split()]
if gold >= pirates and gold+pirates < 100:
    print("true")
else:
    print("false")
