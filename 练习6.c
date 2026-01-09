#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int  main(void ) {


	int a = 0;

	int i = 1;
	int x = 4;
	scanf("%d", &x);
	for (a = 3; a <= x; a++ ) {
		int K = 1;
		for (i = 2; i < a; i++) {

			if (a % i == 0 ) {
				K = 0;
				break;
			}

		}
		if (K == 1) {
			printf("%d\n", a);
		}


	}

//判断是否是素数时,不是素数的条件比较好判断,是素数的条件不好判断,那么可以用怕01法,使用不是素数的条件置0,最后
//用if判断K是否为1,来判断他是素数.
return 0;

}
