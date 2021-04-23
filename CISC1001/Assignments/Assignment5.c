#include<stdio.h>
#include<stdlib.h>

void comput_middle_point(int*,int*,int*,int*);

int main(){
    int a, b, c, d;
	printf("Point A(x1, y1): ");
	scanf("%d %d", &a, &b);

	printf("Point B(x2, y2): ");
	scanf("%d %d", &c, &d);
	
	comput_middle_point(&a, &b, &c, &d);
	return 0;
}

void comput_middle_point(int *a, int *b, int *c, int *d){
    float total_a, total_b;
    if(*a >= *c){
        total_a = (*a - abs(*c))/2;	
	    total_b = (*b - abs(*d))/2;
    }else{
    	total_a = (*c - abs(*a))/2;	
	    total_b = (*d - abs(*b))/2;
    }
	printf("Middle point: (%.0f, %.0f)", total_a, total_b);
}
