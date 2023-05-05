// Implementation of Binary addition and subtraction
#include<stdio.h>

int binAddition(int, int);
int binSubtration(int, int);

int main() {
    int num1, num2, binAdd, binSub;
    printf("Enter Two Integer Values: ");
    scanf("%d%d",&num1,&num2);
    binAdd = binAddition(num1, num2);
    binSub = binSubtration(num1, num2);
    printf("\nBinary Added Value = %d",binAdd);
    printf("\nBinary Subtracted Value = %d", binSub);
    printf("\n");
    return 0;
}

int binAddition(int a, int b) {
    int c;//for carry
    while(b != 0) {
        //find Carry and shift it left
        c = (a & b) << 1;
        //find sum
        a = a^b;
        b = c;
    }
    return a;
}

int binSubtration(int a, int b) {
    int c;//for carry
    //get 2's complement of b and add in a
    b = binAddition(~b, 1);
    while(b != 0) {
        //find carry and shift it left
        c = (a & b) << 1;
        //find the sum
        a = a^b;
        b = c;
    }
    return a;
}
