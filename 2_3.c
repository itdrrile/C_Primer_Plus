
#include <stdio.h>

/*
 * 函数原型（prototype）、函数声明（function declaration）
 * C标准建议，要为程序中用到的所有函数提供函数原型
 */
void butler(void);

int main(void) {

	// 函数调用（function call）
	butler();

	getchar();

	return 0;

}

/*
 * 函数定义（function definition）
 */
void butler(void) {
	
	printf("This is my first function definde!");

}

