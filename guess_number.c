#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	srand(time(0));
	int a = rand();
	int x = a % 100;
	int P = 0;
	int count = 0;

	do {
		count++;
		printf("请输入你的猜想：");
		scanf("%d", &P);
		if (P > x) {
			printf("你猜大了\n");
		} else if (P < x) {
			printf("你猜小了\n");
		}
	} while (P != x);
	printf("恭喜你猜对了，你猜了%d次", count);











	return 0;
}
