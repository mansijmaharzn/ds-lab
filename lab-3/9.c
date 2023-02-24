/*
Program to display the truth table of AND, OR and NOT logical operators
*/

#include<stdio.h>

// This function computes the truth table and stores the result in the passed array
void compute(int [][2], int [][2], int []);
// This function displays the AND and OR table
void displayAOTable(int [][2]);
// This function displays the NOT table
void displayNTable(int []);

int main() {
    int AND[2][2], OR[2][2], NOT[2];

    compute(AND, OR, NOT);

    printf("\n---AND Table---\n");
    displayAOTable(AND);
    printf("\n---OR Table---\n");
    displayAOTable(OR);
    printf("\n---NOT Table---\n");
    displayNTable(NOT);

    return 0;
}

void compute(int a[][2], int b[][2], int c[2]) {
    int i, j; // loop control variable

    for (i=0; i<=1; i++) {
        for (j=0; j<=1; j++) {
            a[i][j] = i && j;
            b[i][j] = i || j;
        }
        c[i] = !i;
    }

    // for (i=0; i<=1; i++) {
    //     c[i] = !i;
    // }
}

void displayNTable(int c[]) {
    int i;
    printf("A\t!A");
    printf("\n-----------\n");
    for (i=0; i<=1; i++) {
        printf("%d\t%d\n", i, c[i]);
    }
}

void displayAOTable(int a[][2]) {
    int i, j;

    printf("A\tB\t:\tC");
    printf("\n---------------------------------\n");

    for (i=0; i<=1; i++) {
        for (j=0; j<=1; j++) {
            printf("%d\t%d\t\t%d\n", i, j, a[i][j]);
        }
    }
}