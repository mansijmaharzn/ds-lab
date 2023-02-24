/*
Implementation of permutation without repetiton where arrangement
is done of n distinct objects taken r at a time p(n, r).
*/

#include<stdio.h>

int fact(int);
int nPr(int, int);

int main() {
    int n, r; // n objects with r objects taken at a time
    int perm;

    printf("Enter total number of objects: ");
    scanf("%d", &n);

    printf("Enter number of objects taken at a time: ");
    scanf("%d", &r);

    perm = nPr(n, r);

    printf("Total permutation is equal to: %d", perm);

    return 0;
}

// This function finds the factorial of a number
int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n-1);
}

// This function finds the permutation
int nPr(int n, int r) {
    if ((n-r) == 0)
        return fact(n);
    else
        return fact(n)/fact(n-r);
}