#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int n=1;
	double P=1;

	int Q;
	
	  printf("输入求和项数：");
		scanf("%d",&Q);
	
	for(n=1;n<=Q;n++){
		
		P =P+1.0/(n);
		
		printf("%f\n",1.0*P);
		
	} 
	printf("n分之一求和%d项结果是%f",Q,1.0*P);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
