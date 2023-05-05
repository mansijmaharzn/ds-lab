/* Program to add an item in an already filled array at a particular position and
delete an item from a particular position in an array */
#include<stdio.h>

#define max 50

int fillArray(int []);
int deleteAtPos(int [], int);
void addAtPos(int [], int);
void displayArray(int [], int);

int main() {
    int A[max], size, size1;
    size = fillArray(A);
    size1 = deleteAtPos(A, size);
    addAtPos(A, size1);

    return 0;
}

int fillArray(int A[]) {
    int i, n;
    printf("How many Elements to be entered");
    scanf("%d", &n);
    printf("\nEnter elements for array\n");
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    return n-1;
}

void displayArray(int A[], int k) {
    int i;
    for(i = 0; i <= k; i++)
        printf("%d\t",A[i]);
    printf("\n");
}

int deleteAtPos(int A[], int k) {
    int pos, i, item;
    printf("\nEnter the index position of the items to be deleted at");
    scanf("%d", &pos);
    if( pos > k)
        printf("You entered beyond manipulation index");
    else {
        item = A[pos];
        for(i = pos; i < k-1; i++)
            A[i] = A[i+1];
    }
    printf("\nItem deleted at index %d  is  %d ", pos,item);
    printf("\n\nArray Items are -> :\t");
    displayArray(A, k-1);
    return k-1;
}

void addAtPos(int A[], int k) {
    int pos, i, temp, item;
    printf("\nEnter Item to be inserted");
    scanf("%d", &item);
    printf("\nEnter the index position the items to be inserted at");
    scanf("%d", &pos);
    if (pos > k)
        printf("You entered beyond manipulation index");
    else {
        for(i = k; i >= pos; i--)
            A[i+1] = A[i];
        A[pos] = item;
    }
    printf("\n\nArray Items are -> :\t");
    displayArray(A, k+1);
}