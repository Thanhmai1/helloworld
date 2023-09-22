#include <stdio.h>
int sum(int a, int b);
int substraction(int a, int b);
int multiplication(int a, int b);
int Division(int a, int b);

int main(){
	int num1, num2;
	printf("\nNhap so thu nhat :");
	scanf("%d", &num1);
	printf("\nNhap so thu hai:");
	scanf("%d", &num2);
	int result1 = sum(num1, num2);
	printf("\Tong : %d", result1);
	int result2 = substraction(num1, num2);
	printf("\nTru : %d ", result2);
	int result3 = multiplication(num1, num2);
	printf("\nNhan: %d", result3);
	int result4 = Division(num1, num2);
	printf("\nChia : %d", result4);
}
int sum(int a, int b){
	int c;
	c = a + b;
	return c;
}
int substraction(int a, int b){
	int c;
	c = a - b;
	return c;
}
int multiplication(int a, int b){
	int c;
	c= a * b;
	return c;
}

int Division(int a, int b){
	int c;
	c = a/b;
	return c;
}

