#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef   struct student {
		int a  ;
		double b ;
		char c;
		long m;
		
	}st;
	typedef union un {
		int x ;
		double b;
		
	}union1 ;
int main(void) {
	
	
	st student2 ;
	student2.b =4;
	
	union1  union_1 ;
	union_1.b=3;
	union_1.x =4;
	//printf("%d \t", union_1.x);
	printf("%d",sizeof(student2.m));
	
	
	return 0;
}
