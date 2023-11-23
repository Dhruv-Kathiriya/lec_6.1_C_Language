#include<stdio.h>

main(){
	int a=1;
	int n;
	
	printf("enter value:");
	scanf("%d",&n);
	
	while(n>=a){
		printf("%d\t",n);
	    n--;
	}
}
