// WAP using recursive function
#include<stdio.h>

int factorial(int n);
int main() {
    int n, fact;

    printf("Enter number: ");
    scanf("%d", &n);

    fact = factorial(n);

    printf("Factorial is: %d", fact);

    return 0;
}


int factorial(int n) {
    if (n==0)
        return 1;
    else
        return (n*factorial(n-1));
}