#include<stdio.h>
int main (){
	float c,r,s;
	printf("ban kinh cua hinh tron la r=");
	scanf("%f",&r);
	c = 6.28*r;
	s = 3.14*r*r;
	printf("\n");
	printf("ket qua tinh chu vi va dien tich cua hinh tron: \n");
	printf("========================================\n");
	printf("Ban kinh hinh tron:      r=%8.1f met \n",r);
	printf("Chu vi hinh tron  :        c=%8.2 met \n",c);
	printf("Dien tich hinh tron:       s=%8.2 met vuong \n",s);
	printf("=============================\n\n");
	printf("Data types   \t | Size of byte \n"); 
	printf(" int         \t |%d byte \n",sizeof(int));
	printf("float        \t |%d byte \n",sizeof(float));
	printf("unsigned int \t |%d byte",sizeof (unsigned int));
	printf("short int    \t |%d byte ",sizeof (short int));
	printf("long int     \t |%d type",sizeof(long int));
	printf("double int   \t |%d type ",sizeof(double));
	return 0;
}
