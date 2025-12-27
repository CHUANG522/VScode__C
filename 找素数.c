#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


	int n = 0;
	int x = 0;
	int Q = 1;
	int count = 0;
	int X = 0;

	printf("输入你要求的素数范围：");
	scanf("%d", &X);

	for (x = 2; x < X; x++) {
		Q = 1;
		for (n = 2; n < x; n++) {

			if (x % n == 0) {
				Q = 0;
				break;
			}
		}
		if (Q == 1) {
			printf("素数是%d\n", x);
			count++;
		}
	}
	printf("%d中素数的个数是：%d", X, count);








	return 0;
}
