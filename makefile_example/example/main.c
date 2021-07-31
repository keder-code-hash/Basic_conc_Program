#include<stdio.h>
#include "header.h"
void main(){
		
	static int a=10,b=11;
	hello();
	//printf("enter the value:\n");
	//scanf("%d%d",&a,&b);
	add(a,b);	
	printf("**end**");
}
