#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	
	
	
	double sum=0;
	int number=0;
	int x,Q=0;
	int count[100];
	double average=0;
	printf("请最后输入0表示输入结束\n");
	printf("请输入所有数：");
	scanf("%d",&x);
	 while(x!=0){
	 	count[number]=x;
	 	printf("count[%d] is %d\n",number,count[number]);
	 number++;
	 sum+=x;
	 scanf("%d",&x);
	 }
	// printf("平均数是：%f",1.0*sum/number);
average=sum/number;
printf("average is %f\n",average);
	for(Q=0;Q<number;Q++){
	if(count[Q]>average){
		printf("大于平均数的是：count[%d]\n",Q);
	printf("大于平均数的是：%d\n",count[Q]);
	}	
	}
	
		
	return 0;
}
