#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int x=0;
	int Q=1;
	int result=0;
	printf(" ‰»Î£ª\n");
	scanf("%d",&x);
	
	while(x!=0){
				
		Q=x%10;
		x=x/10;	
		result=result*10+Q;
		
		
	}
	printf("%d",result);
	
	return 0;
}
