#include <stdio.h>

void printarray(int * arr);

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    int *left = arr;
    int *right = &arr[n-1];
    printarray(left);
    while(left<right){
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
    left -= 3;
    printarray(left);
    return 0;
}

void printarray(int * arr){
    int * end = (arr + 6);
    while(arr<end){
        printf("%i", *(arr++));
    }
    printf("\n");
}



