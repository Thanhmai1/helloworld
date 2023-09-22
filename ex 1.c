#include<stdio.h>
int main(){
	int a;
	int b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("%d + %d = %d\n	",a,b,a + b );
	printf("%d / %d = %d\n",a,b,  a / b);
	printf("%d * %d = %d\n",a,b,  a * b);
	printf("%d - %d = %d\n",a,b,  a - b);
	return 0;
}
