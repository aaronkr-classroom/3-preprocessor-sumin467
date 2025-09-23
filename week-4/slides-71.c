#include<stdio.h>

int main(void) {
	int data = 5, result = 0;
	printf("result = data % 2 -> %d\n", data % 2);//1
	
	printf("result = data++ +2 -> %d\n", data++ +2);//4
	printf("result = data == 5 -> result:%d data: %d\n",result == data, data);//5

	return 0;
}