#include<stdio.h>
char grade(int a);
int main(){
	int b;
	printf("Enter grade: \n");
	scanf("%d",&b);
	int result3 = grade (b);
	printf("Xep hang : %c\n",result3);
	return 0;
}
char grade(int a) {
    if (a >= 90) {
        return 'A';
    } else if (a >= 80) {
        return 'B';
    } else if (a >= 70) {
        return 'C';
    } else if (a >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}
