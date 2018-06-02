/* bitwise.c: Illustrates bitwise ops */

#include <stdio.h>

int main() {
	short int n = 0x00a4; /* 000000000 10100100 */
	short int m = 0x00b7; /* 000000000 10110111 */
	
	printf("n & m == %04x\n", n & m);
	printf("n | m == %04x\n", n | m);
	printf("n ^ m == %04x\n", n ^ m);
	printf("~n == %04x\n", ~n);
	printf("n << 3 == %04x\n", n << 3);
	printf("n >> 3 == %04x\n", n >> 3);
}
