#include<stdio.h>
#include<conio.h>
main(){
	int a=1;
	int n;
	clrscr();
	printf("rnter value :");
	scanf("%d",&n);
	while(a<=n){
		printf("%d\t",a);
		a++;
	}
	getch();
}
