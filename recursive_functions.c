/* SYSC 2006 Winter 2018 Lab 10. */

#include <stdio.h>
#include <math.h>

/* Return x raised to the power n for n >= 0. */
double power(double x, int n)
{
	if(n == 0)
		return 1;
    return x * power(x, n-1);
}

/* Return the number of digits in integer n, n >= 0. */
int num_digits(int n)
{
	if(n / 10 == 0)
		return 1;
    return 1 + num_digits(n/10);
}

/* Return the count of the number of times target occurs in the first 
 * n elements of array a.
 */   
int occurrences(int a[], int n, int target)
{
	if (n == 1){
		if (target == a[0])
			return 1;
		return 0;
	}
	if(target == a[n-1])
		return 1 + occurrences(a, n-1, target);
	return occurrences(a, n-1, target);
}

/* Challenge exercise: return x raised to the power n for n >= 0. */
double power2(double x, int n)
{
    return -1;
}
