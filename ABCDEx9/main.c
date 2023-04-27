#include <stdio.h>

int main(void) {

	int i,rev;
	for(i=10000;i<=99999;i++)
	{
		rev = reverse(i);
		if (i * 9 == rev) {
			printf("%d*9=%d\n", i, rev);
			break;
		}
	}
	return 0;
}