#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("Nhap 3 so:");
	scanf("%d %d %d",&n1,&n2,&n3);
	timSoLonNhat(n1,n2,n3);
	 return 0;
	 }
void timSoLonNhat(int a,int b,int c){
	if ((a>b) &&(a>c))
	printf("so lon nhat la:%d",a);	

    else if ((b>a)&&(b>c)) {
    	printf("so lon nhat la:%d",b);
	}
	else{
		printf("so lon nhat la:%d",c);
}

    
}
