#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int a,int b);
s
int main(int argc, char *argv[]) {
	
	int a=0;
	int x=0;
	double sum=0;
	double average=0;
	int count=0;
	int grape[100]={0};	
	printf("输入值：  \"请输入-1表示输入结束\"\n");
	
	scanf("%d",&x);
	while(x!=-1){
		sum+=x;
		grape[count]=x;
		printf("grape[%d] is %d\n",count,x);
		count++;
		scanf("%d",&x);
	}
average=sum/count;
	printf("The average is %f\n",average);
	int i=0;
	for(i=0;i<=count;i++){
		if(grape[i]>=average){
			printf("大于average的是：%d \t    count[%d]\n",grape[i],i);
		}
	}
	
	
	
		
	return 0;
}

