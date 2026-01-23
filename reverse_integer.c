#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int x = 0;
	int Q = 0;
	int A = 0;

	printf("ÇëÊäÈë£º");
	scanf("%d", &x);
	while (x > 0) {
		A = x % 10;
		printf("%d", A) ;
		Q = Q * 10 + A;

		x /= 10;
	}
	//printf("%d",Q);










	return 0;
}
