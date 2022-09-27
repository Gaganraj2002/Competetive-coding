#include <stdio.h>
#include <stdlib.h>
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int gcd(int a, int b)
{
    if (a == 0 || b == 0)
        return (a + b);
    else
        return gcd(MIN(a, b), MAX(a, b) % MIN(a, b));
}

int main()
{
    int no_of_test_cases;
    scanf("%d", &no_of_test_cases);

    while (no_of_test_cases--)
    {
        int x1, x2, y1, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        printf("%d\n", gcd(abs(x2 - x1), abs(y2 - y1)) - 1);
    }
    return 0;
}