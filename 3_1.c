
#include <stdio.h>

int main(void) {

	float weight;
	float value;

	// ��ȡ����������Ϣ��%f��ʾ����һ��������
	scanf("%f", &weight);

	value = 1700.0 * weight * 14.5833;

	// %.2f��ʾ����Ϊ��λС���ĸ�����
	printf("Your weight in platinum is worth $%.2f.\n", value);

	getchar();
	getchar();

	return 0;

}
