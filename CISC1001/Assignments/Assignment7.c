#include <stdio.h>

int findMax(int* a, int sizeOfArray, int lastValue);

int main() {
    int sizeOfArray;
    int lastValue;
    int a[sizeOfArray];

    printf("Enter the size of array: ");
    scanf("%d", &sizeOfArray);
    
    printf("Input array: ");
    for(int i=0;i<sizeOfArray;i++) {
        scanf("%d", &a[i]);
    }
    lastValue = a[sizeOfArray-1];
    printf("The maximum of the array is %d", findMax(a, sizeOfArray, lastValue));
}

int findMax(int* s, int sizeOfArray, int lastValue) {
    if(sizeOfArray==1)
        return lastValue;
    else {
        if (lastValue<s[sizeOfArray-1])
            lastValue = s[sizeOfArray-1];
    }
    return findMax(s, sizeOfArray-1, lastValue);
}
