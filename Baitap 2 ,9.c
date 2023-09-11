#include<stdio.h>
int main(){
	int n1;
	int n2;
	printf("Nhap hai so: ");
	scanf("%d%d",&n1,&n2);
	int i;
	for (i = n1 ;i < n2; i++){
		if ( i% 2==0)
			printf("%d ",i);
	}	
	return 0;
}

