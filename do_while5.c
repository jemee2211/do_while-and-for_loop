#include<stdio.h>
main(){
	
	int a=1;
	int n;
	
	
	printf("Enter Number: ");
	scanf("%d",&n);
	
	do{
		if(a%2 != 0){
	
			printf("%d\n",a);
			
		}
	a++;
	}while(a<=n);
	
	
	
}
