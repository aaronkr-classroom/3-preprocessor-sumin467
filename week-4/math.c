#include <stdio.h>
#include <math.h>

int main(void) {

	double P = 1000000, r = 0.10, n = 12, t = 40;
	double A = P * pow(1 + r / n, n * t);

	printf("P = %.2f -> A = %.2f\n", P,A);
}