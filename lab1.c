#include<stdio.h>
int main(){
	int n1,n2;
	printf("Nhap 2 so:");
	scanf("%d %d",&n1,&n2);
	//goi ham 
	timSoNho(n1,n2);
	return 0;
}
//trien khai code trong ham
void timSoNho (int a,int b){
	if(a<b){
		printf("so nho hon la: %d",a);
		
		
	}
	else{
		printf("so nho hon la:%d",b);
		
	}
	
}


