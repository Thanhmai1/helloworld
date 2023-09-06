#include<stdio.h>
void main(){
	int basic;
	printf("\nPlease ener your basic: ");
	scanf("%d",basic);
	switch(basic){
		case 200: printf("\nBonus is dollar %d \n",50);
		break;
		case 300 : printf("\nBOnus is dollar %d\n",125);
		break;
		case 400: printf("\nBonus is dollar %d\n",140);
		break;
		case 500: printf("\nBonus is dollar %d\n",175);
		breakl
		default: printf("\nInvalid entry");
		break;
	}
}
