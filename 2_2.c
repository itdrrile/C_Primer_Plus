
#include <stdio.h>

int main(void) {

	// 同时声明多个变量，使用,隔开
	int feet, fathoms;
	
	fathoms = 2;
	feet = fathoms * 6;

	printf("There are %d feet in %d fathoms!\n", feet, fathoms);

	getchar();

	return 0;

}