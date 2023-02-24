#include<stdio.h>

#define max 20

int readset(int []);
void displayset(int [], int);
void findunion(int [], int [], int [], int, int);
void findintersection(int [], int [], int [], int, int);

int main() {
    int setA[max], setB[max], setC[max + max], setD[max];
    int sizeA, sizeB;

    printf("Enter for set A\n");
    sizeA = readset(setA);

    printf("Enter for set B\n");
    sizeB = readset(setB);

    printf("Finding Union...\n");
    findunion(setA, setB, setC, sizeA, sizeB);
    printf("Displaying Union set...\n");
    displayset(setC, sizeA+sizeB);

    printf("Finding Intersection...\n");
    findintersection(setA, setB, setD, sizeA, sizeB);
    printf("Displaying Intersection set...\n");
    displayset(setD, sizeA);

    return 0;
}

int readset(int x[]) {
    int i, n;
    printf("Enter number of objects: ");
    scanf("%d", &n);
    printf("Enter objects of set:\n");
    for (i=0; i<n; i++) {
        scanf("%d", &x[i]);
    }

    return n;
}

void displayset(int x[], int n) {
    int i;

    printf("The values of sets are: ");
    for (i=0; i<n; i++) {
        printf("%d\t", x[i]);
    }
}

void findunion(int x[], int y[], int z[], int m, int n) {
    int i, j, k;
    int flag = 0;

    for (i=0; i<m; i++) {
        z[i] = x[i];
    }
    k = i;
    
    for (i=0; i<n; i++) {
        flag = 0;
        for (j=0; j<m; j++) {
            if (y[i] == x[j]) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            z[++k] = y[i];
        }
    }
}

void findintersection(int x[], int y[], int z[], int m, int n) {
    int i, j, k=0;

    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            if (x[i] == y[j]) {
                z[k] = x[i];
                k++;
            }
        }
    }
}