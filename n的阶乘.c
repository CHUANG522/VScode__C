#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int n = 0;
	int i = 1;
	int fact = 1;

	printf("输入你的阶乘数n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		fact = fact * i;
		printf("fact的值是：%d\n", fact);
	}

	printf("n的阶乘是%d", fact);











	return 0;
}
