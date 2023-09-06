#include<stdio.h>
int main(){
	float com=0,sales_amt;
	char grade;
	printf("Enter the Sales Amuont: ");
	scanf("%f",&sales+amt);
	printf("\nENter the Grade :");
	scanf("%c",&grade);
	if (sales+amt > 10000)
		if (grade == 'A')
			com =sales_amt *0.01;
		else 
			com = sales_amt * 0.08;
	else 
		com = sales_amt * 0.05;
	printf("\nCmmission = %f",com);
	return 0 ;
}
