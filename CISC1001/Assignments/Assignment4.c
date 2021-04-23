#include <stdio.h>

#define INCH_TO_CM 2.54

void inches_cm(int,int);

void cm_inches(int,int);

int main(){
	int decision, a, b= 0;
	
	printf("Conversion table between inches and centimeters\n(1) inches to centimeters\n(2)centimeters to inches\n");
	printf("Choose conversion type (1,2): ");
	scanf("%d", &decision);
	
	printf("Enter starting value: ");
	scanf("%d", &a);
	
	printf("Enter ending value: ");
	scanf("%d", &b);

	switch(decision){
		case 1:
			inches_cm(a,b);
			break;
		case 2:
			cm_inches(a,b);
			break;
		default:
		    printf("You should enter either 1 or 2!");
			break;		
	}
	return 0;
}

void inches_cm(int a, int b){
	printf("Inches  cm\n");
	for(int i=0;i<=b;i+=4){
		printf("%2d    %5.1f\n", i, (i*INCH_TO_CM));
	}
}

void cm_inches(int a, int b){
    printf("cm  Inches\n");
	for(int i=0;i<=b;i+=10){
		printf("%2d    %5.1f\n", i, (i/INCH_TO_CM));
	}  
}
