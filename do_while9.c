#include<stdio.h>
main(){
	
	int a = 1;
	int n;
	int mul =1;
	
	printf("Enter Number:");
	scanf("%d",&n);
	
	do{
	
		mul*=a;
	
		
		a++;
		
		
	}while(a<=n);
		printf("%d",mul);
}
