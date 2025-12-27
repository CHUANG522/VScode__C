#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void exchange(int *a, int *b);
int search(int key,int a[],int length);

int main(int argc, char *argv[]) {
	

	int a[]={1,2,4,5,6,7,8,9,6,};
	int x=0; int result=0;
	int length=sizeof(a)/sizeof(a[0]);
	
	printf("请输入：\t");
	scanf("%d",&x);
	
	result=search(x,a,length);
printf("The result is %d\n",result);
	
	
	
	return 0;}
	void exchange(int *a, int *b){int count=*a;
	*a=*b;
	*b=count; 
	
	printf("a is %d\t b is %d\t",*a,*b);	}
	
	int search(int key,int a[],int length){
	int X=0;  int i=0;
	
	for( i=0;i<length;i++){
		if (key==a[i]){
			X=1;	
			break;
		}
	} if(X==1){printf("这个数存在，他在a[%d]\n",i);
		 return key;
	}else {printf("这个数不存在\n");
return 0;	}

}
	
