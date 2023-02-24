/*
This program finds the combination of n objects with r objects
taken at a time
*/

#include<stdio.h>
int fact(int);
int nCr(int, int);

int main(){
    int n, r; //n objects with r objects taken at a time
    int comb;

    printf("How many objects total: ");
    scanf("%d",&n);

    printf("How many objects taken at a time: ");
    scanf("%d",&r);

    comb = nCr(n, r);

    printf("Total combination is equal to: %d", comb);

    return 0;
}

//This function finds the factorial of a number
int fact(int n){
    if (n == 0)
        return 1;
    else
        return n * fact(n-1);
}

// This function finds the combination
// combination = n!/r!(n-r)!
int nCr(int n, int r){
    if ((n-r) == 0)
        return fact(n)/fact(r);
    else
        return fact(n)/fact(r) * fact(n-r);
}