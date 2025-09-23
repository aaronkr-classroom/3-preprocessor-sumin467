#include <stdio.h>

int main(void) {
	int num = 123456;
	printf("%d %u", num, num); // ∫Œ»£

	int small = 7,
		mid = 147,
		big = 77441;

	printf("\n=============================\n");
	printf("%5d\t%05d\t%-5d\n", small, small, small);
	printf("%5d\t%05d\t%-5d\n", mid, mid, mid);
	printf("%5d\t%05d\t%-5d\n", big, big, big);
	return 0;
}