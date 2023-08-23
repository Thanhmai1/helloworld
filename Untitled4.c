#include<stdio.h>
#include<math.h>
float dienTichHinhTamGiac(float a,float b,float c){
		float s=(a+b+c)/2;
        float dienTichTamGiac=sqrt(s*(s-a)*(s-b)*(s-c));
	}
int main(){
	float a,b,c,area ;
	printf("Nhap ba canh:");
	scanf("%f %f %f",&a,&b,&c);
	area=dienTichHinhTamGiac(a,b,c);
	printf("Dien tich hinh tam giac la: %f",area);
	return 0;
}


