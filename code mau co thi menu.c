#include<stdio.h>
void displayMenu();
void placeOrder(char option);
float caculateTotalCosr(char option , int quantity);
int main(){
	char option;
	int quantity;
	do{
		displayMenu();
		printf("Enter your option : "); //nhap
		scanf("%c",&option);
		if (option != 'd'){
			printf("Enter the quantity: ");
			scanf("%d",&quantity);
			placeOrder(option);
			float totalCost = calculateTotalCost (option , quantity);
			printf("Total cost : $ %.2f\n\n",totalCost);
		}
		while (option != 'd');
		return 0;
	}
	void displayMenu(){
		printf("************* Coffee Shop Menu *****************")
		printf("Espresso - %2.50\n");
		printf("b.Cappuccion - $3.00\n");//Menu quan
		printf("c.Latte - $3.50\n");
		printf("d .Quit\n");
	}
	void placeOrder(char option){
		switch (option){
			case 'a':
				printf("Placing order : Espresso\n");
				break;
			case 'b':
				printf("Placing order : Cappuccino\n");
				break;
			case 'c':
				printf("Placing order : Latte\n");
				break;
			default:
				printf("Invalid option.Please try again.\n")
		}
	}
	float calculateTotalCost (char option,int quantity){
		float price;
		switch(option){
		case 'a':
			price = 250; //neu nhap a thi so tien la 250
			break;
		case 'b':
			price = 300;//neu nhap b thi so tien la 300
			break;
		case 'c':
			price = 350;//neu nhap c thi so tien la 350
			break;
		default:
			price = 0.00;
		}
		return price * quantity;// return gia tien nhan voi so luong
		
	}
}
