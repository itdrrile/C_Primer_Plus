
#include <stdio.h>

/*
 * ����ԭ�ͣ�prototype��������������function declaration��
 * C��׼���飬ҪΪ�������õ������к����ṩ����ԭ��
 */
void butler(void);

int main(void) {

	// �������ã�function call��
	butler();

	getchar();

	return 0;

}

/*
 * �������壨function definition��
 */
void butler(void) {
	
	printf("This is my first function definde!");

}

