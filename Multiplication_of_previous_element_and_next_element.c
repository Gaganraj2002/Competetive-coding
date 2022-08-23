// Multiplication of previous element and next element
#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n], output[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int product = 0;
        if (i == 0)
        {
            product = arr[i] * arr[i + 1];
        }
        else if (i == n - 1)
        {
            product = arr[i - 1] * arr[i];
        }
        else
        {
            product = arr[i - 1] * arr[i + 1];
        }
        output[i] = product;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", output[i]);
    }
    return 0;
}