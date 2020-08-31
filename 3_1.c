
#include <stdio.h>

int main(void) {

	float weight;
	float value;

	// 获取键盘输入信息，%f表示接收一个浮点数
	scanf("%f", &weight);

	value = 1700.0 * weight * 14.5833;

	// %.2f表示精度为两位小数的浮点数
	printf("Your weight in platinum is worth $%.2f.\n", value);

	getchar();
	getchar();

	return 0;

}
