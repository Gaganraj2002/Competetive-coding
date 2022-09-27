def gcd(a, b):
    if (a == 0 or b == 0):
        return (a + b)
    else:
        return gcd(min(a, b), max(a, b) % min(a, b))


no_of_test_cases = int(input())
while (no_of_test_cases):
    x1, y1, x2, y2 = [int(x) for x in input().split()]
    print(gcd(abs(x2 - x1), abs(y2 - y1)) - 1)
    no_of_test_cases -= 1
