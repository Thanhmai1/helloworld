#include<stdio.h>
void main(){
	int x;
	x=0;
	
	printf("Enter Choice (1-3) : ");
	scanf("%d",&x);
	if (x==1)
		printf("Choice is 1");
	else if (x == 2)
		printf("Choice is 2");
	else if (x == 3)
		printf("Choice is 3");
	else
		printf("\nInvalid Choice ");
}
