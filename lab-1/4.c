// WAP to implement cartesian product of two sets
#include<stdio.h>

int readsets(int []);
void cartesianprod(int [], int [], int, int);

int main() {
    int setA[20], setB[20], sizeA, sizeB;

    printf("Set A\n");
    printf("******\n");
    sizeA = readsets(setA);
    printf("Set B\n");
    printf("******\n");
    sizeB = readsets(setB);

    cartesianprod(setA, setB, sizeA, sizeB);
    
    return 0;
}

int readsets(int x[]) {
    int n, i;

    printf("How many elements to store(<20): ");
    scanf("%d", &n);

    printf("Enter the set elements: ");
    for (i=0; i<n; i++) {
        scanf("%d", &x[i]);
    }

    return n;
}

void cartesianprod(int x[], int y[], int sizeA, int sizeB) {
    int i, j;

    printf("{");

    for (i=0; i<sizeA; i++) {
        for (j=0; j<sizeB; j++) {
            printf("(%d, %d) ", x[i], y[j]);
        }
    }

    printf("}");
}