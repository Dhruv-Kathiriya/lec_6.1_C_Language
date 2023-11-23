#include<stdio.h>

main(){
	
	int a=30;
	int n;

	printf("enter value:");
	scanf("%d",&n);
	while(a<=n){
	
		if(a%2==1)
		{
		printf("%d\t",a);
	}
	    a--;
	}
	
}
