
/*
 * C语言基本数据类型：
 * 1、整数类型
 *    (1)整数的储存方式：整数部分（整体存储）
 *    (2)int：有符号整型（正整数、负整数、零），取值范围依计算机系统而异（一般占用一个机器字长word），
 *           ISO C规定int的取值范围-32768~32767（4字节） 
 *           int类型常量：整型常量或整型字面量，c语言把不含小数点和指数的数作为整数
 *           printf()函数中，转换说明%d与相应的int值匹配，可以是int类型变量、int类型常量或其他任何值为int类型的表达式
 *           printf()函数中，%u说明显示unsigned int类型的值
 *           printf()函数中，%hd说明显示short int类型的值；printf()函数中，%hu说明显示unsigned short int类型的值
 *           printf()函数中，%ld说明显示long int类型的值；printf()函数中，%lu说明显示unsigned long int类型的值
 *           printf()函数中，%lld说明显示long long int类型的值；printf()函数中，%llu说明显示unsigned long long int类型的值
 *           printf()函数中，显示八进制%o，%#o；显示十六进制%x，%#x，%#X；显示十进制%d
 *    (3)附属关键字：用于修饰基本整数类型int，C语言
 *           short：short int（简写short），占用存储空间比int少，有符号
 *           long：long int（简写long），占用存储空间比int多，有符号，可使用后缀L；
 *                 long long int（简写long long），C99标准加入，占用存储空间比long int多（至少64位），有符号，可使用后缀LL
 *           unsigned：unsigned int（简写unsigned），非负值，无符号，16位unsigned int允许的取值范围为0~65535
 *    (4)对于整数常量，编译器会尝试按照int、unsigned int、long int、unsigned long int、long long int、unsigned long long int的顺序去匹配数值范围
 *    (5)整数溢出：
 *           无符号：重新从0开始
 *           有符号：绝对值加1，但是变为负值（2147483647 -> -2147483648）
 * 2、字符：char类型
 *    (1)char类型用于储存字符（字母或标点符号），计算机中char类型储存的是整数（ASCII码0~127）
 *    (2)printf()函数中，%c说明显示char类型的值
 *
 *
 * 3、布尔：_Bool类型
 *    (1)0 - false； 1 - true
 *    (2)占用1位空间
 *
 *
 *
 * 2、浮点数
 *    (1)浮点数的储存方式：小数部分 + 指数部分（分开存储）
 *    (2)计算机的浮点数通常只是实际值的近似值
 */

/*
 * 可移植类型（C99标准）：确保C语言的类型在各系统中的功能相同
 *     (1)stdint.h中定义了更多的类型名，如int32_t表示32位的有符号整数类型，在32位系统中，头文件会把int32_t作为int的别名；
 *        int_fast_8_t定义了系统中对8位有符号值运算最快的整数类型的别名；
 *        intmax_t定义了最大的有符号整数类型，unintmax_t定义了最大的无符号整数类型
 *     (2)inttypes.h中提供了一些字符串宏来显示可移植类型（输入和输出）
 *        PRld32字符串宏：代表打印32位有符号值的合适转换说明
 */
#include <stdint.h>
#include <inttypes.h>

int main(void) {

	long int lint; // 或long lint
	long long int llint;
	unsigned int uint; // 或unsigned uint
	unsigned long int ulint;

	char ch = 'Z';
	char ch1 = 103;

	// 获取int类型长度
	printf("int sizeof is %d\n", sizeof(int)); // -> 4byte
	// 获取long long int类型长度
	printf("long long int sizeof is %d\n", sizeof(long long int)); // -> 8byte
	// 获取unsigned int类型长度
	printf("unsigned int sizeof is %d\n", sizeof(unsigned int)); // -> 4byte

	// 打印八进制
	printf("123-> %o\n", 123);  // 173
	printf("123-> %#o\n", 123); // 0173

	// 打印十六进制
	printf("123-> %x\n", 123); // 7b
	printf("123-> %#x\n", 123); // 0x7b
	printf("123-> %#X\n", 123); // 0X7B

	// 打印字符
	printf("char is %d\n", ch); // Z -> 90，打印字符对应的编码值，使用%d
	printf("char with code 103 is %c\n", ch1); // 103 -> g，打印编码对应的字符，使用%c



}