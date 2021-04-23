#include<stdio.h>
#define RMB_TO_USD 14.49/100

int main(){
	int denominations[] = {1, 5, 10, 20, 50, 100};
	int amount, sum;

	for(int i=0; i<6; i++){
		printf("Number of %d Yuan: ", denominations[i]);
		scanf("%d", &amount);
		sum = sum + (amount * denominations[i]);
	}

	printf("The sum of RMB is %d Yuan, worth %.2f dollars", sum, sum * RMB_TO_USD);

	return 0;
}