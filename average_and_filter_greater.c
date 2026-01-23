

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


	int count[10] = {0};
	int x, k, i = 0;
	printf("请输入：\n");
	scanf("%d", &x);

//	for(i=0;i<10;i++){
	//	count[i]=i;
	//	printf("count[%d] is %d\n",i,count[i]);
//	}

	count[x]++;
	while (x != -1) {
		scanf("%d", &x);
		if (	x >= 0 && x <= 9) {
			count[x]++;
		}
	}
	for (k = 0; k < 10; k++) {
		printf("count[%d] 出现的次数是：%d\n", k, count[k]);
	}










	return 0;
}



