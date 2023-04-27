#include "pascal.h"

int binomial(int n, int k)
{
	return factorial(n) / (factorial(k) * factorial(n - k));
}

int factorial(int n) {
	if (n == 0) return 1;
	return n * factorial(n - 1);
}