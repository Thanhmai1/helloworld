#include <stdio.h>
int main(){
	float S,t,v,a;
	printf("Nhap diemtren thang diem 10:");
	scanf("%f%f%f",&t,&v,&a);
	S=t*2+v*2+a;
if (S>=40)
   printf("Pass");
else {
	printf("Fail");
}
return 0;
}
