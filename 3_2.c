
/*
 * C���Ի����������ͣ�
 * 1����������
 *    (1)�����Ĵ��淽ʽ���������֣�����洢��
 *    (2)int���з������ͣ������������������㣩��ȡֵ��Χ�������ϵͳ���죨һ��ռ��һ�������ֳ�word����
 *           ISO C�涨int��ȡֵ��Χ-32768~32767��4�ֽڣ� 
 *           int���ͳ��������ͳ�����������������c���԰Ѳ���С�����ָ��������Ϊ����
 *           printf()�����У�ת��˵��%d����Ӧ��intֵƥ�䣬������int���ͱ�����int���ͳ����������κ�ֵΪint���͵ı��ʽ
 *           printf()�����У�%u˵����ʾunsigned int���͵�ֵ
 *           printf()�����У�%hd˵����ʾshort int���͵�ֵ��printf()�����У�%hu˵����ʾunsigned short int���͵�ֵ
 *           printf()�����У�%ld˵����ʾlong int���͵�ֵ��printf()�����У�%lu˵����ʾunsigned long int���͵�ֵ
 *           printf()�����У�%lld˵����ʾlong long int���͵�ֵ��printf()�����У�%llu˵����ʾunsigned long long int���͵�ֵ
 *           printf()�����У���ʾ�˽���%o��%#o����ʾʮ������%x��%#x��%#X����ʾʮ����%d
 *    (3)�����ؼ��֣��������λ�����������int��C����
 *           short��short int����дshort����ռ�ô洢�ռ��int�٣��з���
 *           long��long int����дlong����ռ�ô洢�ռ��int�࣬�з��ţ���ʹ�ú�׺L��
 *                 long long int����дlong long����C99��׼���룬ռ�ô洢�ռ��long int�ࣨ����64λ�����з��ţ���ʹ�ú�׺LL
 *           unsigned��unsigned int����дunsigned�����Ǹ�ֵ���޷��ţ�16λunsigned int�����ȡֵ��ΧΪ0~65535
 *    (4)���������������������᳢�԰���int��unsigned int��long int��unsigned long int��long long int��unsigned long long int��˳��ȥƥ����ֵ��Χ
 *    (5)���������
 *           �޷��ţ����´�0��ʼ
 *           �з��ţ�����ֵ��1�����Ǳ�Ϊ��ֵ��2147483647 -> -2147483648��
 * 2���ַ���char����
 *    (1)char�������ڴ����ַ�����ĸ������ţ����������char���ʹ������������ASCII��0~127��
 *    (2)printf()�����У�%c˵����ʾchar���͵�ֵ
 *
 *
 * 3��������_Bool����
 *    (1)0 - false�� 1 - true
 *    (2)ռ��1λ�ռ�
 *
 *
 *
 * 2��������
 *    (1)�������Ĵ��淽ʽ��С������ + ָ�����֣��ֿ��洢��
 *    (2)������ĸ�����ͨ��ֻ��ʵ��ֵ�Ľ���ֵ
 */

/*
 * ����ֲ���ͣ�C99��׼����ȷ��C���Ե������ڸ�ϵͳ�еĹ�����ͬ
 *     (1)stdint.h�ж����˸��������������int32_t��ʾ32λ���з����������ͣ���32λϵͳ�У�ͷ�ļ����int32_t��Ϊint�ı�����
 *        int_fast_8_t������ϵͳ�ж�8λ�з���ֵ���������������͵ı�����
 *        intmax_t�����������з����������ͣ�unintmax_t�����������޷�����������
 *     (2)inttypes.h���ṩ��һЩ�ַ���������ʾ����ֲ���ͣ�����������
 *        PRld32�ַ����꣺�����ӡ32λ�з���ֵ�ĺ���ת��˵��
 */
#include <stdint.h>
#include <inttypes.h>

int main(void) {

	long int lint; // ��long lint
	long long int llint;
	unsigned int uint; // ��unsigned uint
	unsigned long int ulint;

	char ch = 'Z';
	char ch1 = 103;

	// ��ȡint���ͳ���
	printf("int sizeof is %d\n", sizeof(int)); // -> 4byte
	// ��ȡlong long int���ͳ���
	printf("long long int sizeof is %d\n", sizeof(long long int)); // -> 8byte
	// ��ȡunsigned int���ͳ���
	printf("unsigned int sizeof is %d\n", sizeof(unsigned int)); // -> 4byte

	// ��ӡ�˽���
	printf("123-> %o\n", 123);  // 173
	printf("123-> %#o\n", 123); // 0173

	// ��ӡʮ������
	printf("123-> %x\n", 123); // 7b
	printf("123-> %#x\n", 123); // 0x7b
	printf("123-> %#X\n", 123); // 0X7B

	// ��ӡ�ַ�
	printf("char is %d\n", ch); // Z -> 90����ӡ�ַ���Ӧ�ı���ֵ��ʹ��%d
	printf("char with code 103 is %c\n", ch1); // 103 -> g����ӡ�����Ӧ���ַ���ʹ��%c



}