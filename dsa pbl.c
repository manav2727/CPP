#include <stdio.h> 
void decToBinary(int n) 
{ 
	printf("\n\tBinary Number: ");
	int binaryNum[32],i=0,j; 
	while (n > 0) { 
		binaryNum[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 
	for (j = i - 1; j >= 0; j--) 
		printf(" %d",binaryNum[j]); 
		printf("\n");
} 
void sevenSegDisplay(int n){
	printf("\n\tSeven Segment Display:\n");
	int a[10],i=0,len=0;
	while(n>0){
		int m = n%10;
		n/=10;
		a[i]=m;
		i++;
		len++;
	}
	for(i=len-1;i>=0;i--){
		if(a[i]==0){
			printf("\t __\n");
			printf("\t|  |\n");
			printf("\t|__|\n");
		}
		if(a[i]==1){
			printf("\t \n");
			printf("\t |\n");
			printf("\t |\n");
		}
		if(a[i]==2){
			printf("\t __\n");
			printf("\t __|\n");
			printf("\t|__ \n");
		}
		if(a[i]==3){
			printf("\t __\n");
			printf("\t __|\n");
			printf("\t __|\n");
		}
		if(a[i]==4){
			printf("\t \n");
			printf("\t|__|\n");
			printf("\t   |\n");
		}
		if(a[i]==5){
			printf("\t __\n");
			printf("\t|__ \n");
			printf("\t __|\n");
		}
		if(a[i]==6){
			printf("\t __\n");
			printf("\t|__ \n");
			printf("\t|__|\n");
		}
		if(a[i]==7){
			printf("\t __\n");
			printf("\t   |\n");
			printf("\t   |\n");
		}
		if(a[i]==8){
			printf("\t __\n");
			printf("\t|__|\n");
			printf("\t|__|\n");
		}
		if(a[i]==9){
			printf("\t __\n");
			printf("\t|__|\n");
			printf("\t __|\n");
		}
	}
}


void main() 
{ 
	int n;
	printf("\n\tDS Mini Project\n\tBinary number creation from decimal number. \n\t\t1. Decimal to binary \n\t\t2. Binary to 7-segment\n");
	printf("\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
	printf("\n\n\tPress 0 to exit");
	printf("\n\tEnter a number to convert from decimal to binary:");
	scanf("%d",&n);
	while(n!=0){
		decToBinary(n);
		sevenSegDisplay(n);
		printf("\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
		printf("\n\tEnter a number to convert from decimal to binary:");
		scanf("%d",&n);
	}
	if(n==0){
	printf("\n\tYou entered 0 to exit.");
	}
	 
	getch(); 
}
