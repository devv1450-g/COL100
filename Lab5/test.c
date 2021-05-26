#include <stdio.h>

void main() {
	unsigned int inum;
	unsigned int posi;
//	inum = 0xffffffff; // max value in unsigned int
	scanf("%u", &inum);
	for(int i = 31; i >= 0; i--) {
		posi = 1 << i;   // 2^i, or 1 * 2^i
		printf("%d", (inum & posi ? 1 : 0));

	}
	printf("\n");
}