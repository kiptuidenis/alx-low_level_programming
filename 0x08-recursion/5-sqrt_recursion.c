#include <stdio.h>

/**
 *_sqrt_recursion - finds square root of a number
 *@n: number whose sqrt is to be found
 *
 *Return: Square root of n
 */

 int _sqrt_recursion(int n)
 {
	 return isqrt_rec(1, n);
 }

/**
 *isqrt_rec
