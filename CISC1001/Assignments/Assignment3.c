#include <stdio.h>

void grade(int);

int main()
{
    int score;
    printf("Enter your exam mark (0..100):");
    scanf("%d", &score);
    grade(score);
    return 0;
}

void grade(int a){
    switch (a){
        case 93 ... 100:
            printf("Your grade is %s", "A");
            break;
        case 88 ... 92:
            printf("Your grade is %s", "A-");
            break;
        case 83 ... 87:
            printf("Your grade is %s", "B+");
            break;
        case 78 ... 82:
            printf("Your grade is %s", "B");
            break;
        case 73 ... 77:
            printf("Your grade is %s", "B-");
            break;
        case 68 ... 72:
            printf("Your grade is %s", "C+");
            break;
        case 63 ... 67:
            printf("Your grade is %s", "C");
            break;
        case 58 ... 62:
            printf("Your grade is %s", "C-");
            break;
        case 53 ... 57:
            printf("Your grade is %s", "D+");
            break;
        case 50 ... 52 :   
            printf("Your grade is %s", "D");
            break;
        case 0 ... 49 :   
            printf("Your grade is %s", "F");
            break;
    }
}
