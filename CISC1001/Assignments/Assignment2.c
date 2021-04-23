#include <stdio.h>
#include <math.h>
#define OVERTIME_RATE 1.5

//Function for compute the amount of normal work hour
float normal_payroll(float, float);
//Function for compute the amount of overtime work hour
float overtime_payroll(float, float);

Int main(){
	float NORMAL_HOURLY_RATE;
	float normal_hours_worked, overtime_hours_worked;
	float sum_normal, sum_overtime;

	printf("Normal hours worked:");
	scanf("%f", &normal_hours_worked);

	printf("Overtime hours worked:");
	scanf("%f", &overtime_hours_worked);

	printf("Normal hourly rate ($):");
	scanf("%f", &NORMAL_HOURLY_RATE);


	sum_normal = normal_payroll(normal_hours_worked, NORMAL_HOURLY_RATE);
	sum_overtime = overtime_payroll(overtime_hours_worked, NORMAL_HOURLY_RATE*1.5);

	printf("\n\nTotal pay:$%.2f", fabs(sum_normal + sum_overtime) );

	return 0;
	
}

float normal_payroll(float hours, float rate){
	float sum = hours * rate;
	return sum;
}

float overtime_payroll(float hours, float rate){
	float sum = hours * rate;
	return sum;
}