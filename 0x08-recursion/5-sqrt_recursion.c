#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

    int start = 1;
    int end = n;
    int result = -1;

    while (start <= end) {
        int mid = (start + end) / 2;

        // Check if mid*mid is equal to n
        if (mid * mid == n) {
            return mid;
        }

        // If mid*mid is less than n, search in the right half
        if (mid * mid < n) {
            start = mid + 1;
            result = mid;
        }
        // If mid*mid is greater than n, search in the left half
        else {
            end = mid - 1;
        }
    }

    return result;
}
