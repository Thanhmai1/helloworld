#include<stdio.h>
int main(){
	int i;
	int n;
	for (i = 1 ; i <= 100; i+=i ){
		printf("%d, ",i);
	}
	return 0;
}
