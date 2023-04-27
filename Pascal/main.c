#include <stdio.h>
#include "pascal.h"

int main(void) {
	//printf("4! = %d\n", factorial(4));
	//printf("b(5,2) = %d\n", binomial(5,2));
	printf("\033[1;36m");//change the color of foreground and background
	int n, k;
	for(n=0; n<ROWS; n++){//outer loop for rows
		for (int i = 0; i < ROWS - n; i++) printf("  ");  
		for (k = 0; k <= n; k++) {
			printf("%4d", binomial(n, k));
	    }
		printf("\n");
	}
	printf("\033[0m");
}