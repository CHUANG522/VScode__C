#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int count[10 ]={0,1,2,3,4,5,6,7,8,9,};
	int i,x=0;
	int cot=0;
	
	for(i=0;i<=10;i++){
	//	count[i]=i;
		printf("count[%d] is %d\n",i,count[i]);
}
printf("count de zi jie is %zu",sizeof(count));
	
/*	printf("请输入：\n");
	scanf("%d",&x);
	if(x>-1&&x<10){
		count[x]++;
	}
	while(x!=-1){
		scanf("%d",&x);
		if(x>-1&&x<10){
			count[x]++;
		}
	}for(cot=0;cot<10;cot++){
		printf(" %d出现了%d 次\n",cot,count[cot]);
	}*/
	
	
	
	return 0;
}
