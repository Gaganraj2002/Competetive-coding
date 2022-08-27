// remove repeated digits
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long int removeRecur(long int n)
{
    // Store first digits as previous digit
    int prev_digit = n % 10;

    // Initialize power
    long int pow = 10;
    long int res = prev_digit;

    // Iterate through all digits of n, note that
    // the digits are processed from least significant
    // digit to most significant digit.
    while (n) {
        // Store current digit
        int curr_digit = n % 10;

        if (curr_digit != prev_digit) {
            // Add the current digit to the beginning
            // of result
            res += curr_digit * pow;

            // Update previous result and power
            prev_digit = curr_digit;
            pow *= 10;
        }

        // Remove last digit from n
        n = n / 10;
    }

    return res;
}

// Driver program
int main()
{
    long int n = 12224;
    printf("%ld",removeRecur(n));
    return 0;
}
