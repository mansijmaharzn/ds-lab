// WAP to find floor and celing numbers
#include<stdio.h>
#include<math.h>

int main() {
    double d, res;

    printf("Enter a double value: ");
    scanf("%lf", &d);

    res = floor(d);

    printf("The floow result: %lf\n", res);

    res = ceil(d);

    printf("The ceiling result: %ld", res);

    return 0;
}