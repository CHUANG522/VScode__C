#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


	int n = 0;
	int x = 0;
	int Q = 1;
	printf("请输入：");
	scanf("%d", &x);

	for (n = 2; n < x; n++) { //printf("%d\n",n);
		if (x % n == 0) {
			printf("可以除的数是%d\n", n);
			Q = 0; //break;
		}
	}
	if (Q == 0) {
		printf("不是素数");
	} else {
		printf("是素数");
	}




	return 0;
}
