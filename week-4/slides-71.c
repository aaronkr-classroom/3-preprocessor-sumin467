#include<stdio.h>

int data = 5, result = 0;

int main(void) {

	int result1 = data % 2;
	int result2 = data < 5;
	int result3 = data < 4 + 3;
	int reslut4 = data++ + 2;
	int reslut5 = data == 5; int data5 = data == 5;
	int data6 = 5;
	int result6 = data != 5 && (data = 0); 
	int result7 = 0; int data7 = 5;
	result7 = --result7 && (data7 = 0);
	int result8 = 0; int data8 = 5;
	result8 = result8-- && (data8 = 0);
	int result9 = 0; int data9 = 5;
	result9 = result9-- || (data9 = 0);

	printf("result = data % 2 ->result: %d\n", result1);//1
	printf("result = data < 2 ->result: %d\n", result2); //2
	printf("result = data < 4+3 ->result: %d\n", result3); //3
	printf("result = data++ +2 ->result: %d, data: %d\n", reslut4,data++);//4
	printf("result = data == 5 -> result:%d data: %d\n", reslut5,data=5);//5
	printf("result = data != 5 &&(data = 0) -> result:%d data: %d\n", result6,data6);//6
	printf("result = --result && (data = 0) ->result: %d, data: %d\n",result7,data7);//7
	printf("result = result-- && (data = 0)->result: %d, data: %d\n", result8,data8);//8
	printf("result = result-- || (data = 0)->result: %d, data: %d\n", result9, data9);//9

	return 0;
}
