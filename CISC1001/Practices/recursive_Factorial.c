#include <stdio.h>

int recur_factorial(int n);
void factorial();

int main() {
    for(int i=1;i<10;i++) {
        printf("This is the %dth time\n", i);
        factorial();
    }
}

int recur_factorial(int n) {
    int sum = 0;
    if (n == 1) {
        sum = n;
    }
    else {
        sum = n * recur_factorial(n - 1);
    }
    return sum;
}

void factorial() {
    int input;
    printf("Enter the number for factorial: ");
    scanf("%d", &input);
    int number = recur_factorial(input);
    printf("The factorial of %d is %d\n", input, number);
}
