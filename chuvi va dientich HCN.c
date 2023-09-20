#include<stdio.h>
	int main(){
		chuVi_dienTich();
	}
	void chuVi_dienTich(){
	int chieuDai,chieuRong,c,s;
	printf("Nhap chieu dai va chieu rong : ");
	scanf("%d%d",&chieuDai,&chieuRong);
	c = (chieuDai + chieuRong) * 2;
	s = chieuDai * chieuRong;
	printf("Chu vi : %d\n",c);
	printf("Dien tich : %d",s);
}
