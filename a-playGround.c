#include <stdio.h>
#include<stdlib.h>

void printPointer1(int num);
int* printPointer2(int num);
void decimalToBinary(int num);
void printingPrimeFactorsOfNumbers(int num);

int main () {
    // printPointer1(5);
    // decimalToBinary(7);
    // decimalToBinary(8);
    // printingPrimeFactorsOfNumbers(20);
    
    return 0;
}

void printPointer1(int num){
    int *intP, i;
    intP = printPointer2(num);
    for (i = 0; i < num; i++)
    {
        printf("i: %d\n", *(intP+i));
    }
    free(intP);
    
    
}
int* printPointer2(int num){
    int *intArr, i, x;
    intArr = (int*) malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        x = num * i;
        intArr[i] = x;
        printf("x: %d\n", *(intArr+i));
    }
    return intArr;
}
void decimalToBinary(int num){
    char res = num & 1101;
    printf("num: %d\n", num);
    printf("res: %u\n", res);
}
void printingPrimeFactorsOfNumbers(int num){
    int j, count = 0;
    for (int i = num; i > 0; i--)
    {
        printf("\n%d: ", i);
        for(count = 2, j = i; j > 1; count++)
        {  
            while(j % count == 0)
            {
                printf("%d ", count);
                j = j / count;
            }  
        } 
    }
}
