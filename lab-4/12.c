// Search an item in an array with random numbers recursively.
#include<stdio.h>

#define max 50

int RecursiveLinearSearch(int A[], int n, int key);
int fillArray(int []);

int main() {
    int A[max], index, item, size;
    size = fillArray(A);

    printf("Enter the item to be searched\n");
    scanf("%d", &item);

    index = RecursiveLinearSearch(A, size-1, item);

    if(index == -1)
        printf("Item could not be found");
    else
        printf("\nItem found at index = %d", index);
    
    return 0;
}

int fillArray(int A[]) {
    int i, n;

    printf("Enter the no of elements to be entered\n");
    scanf("%d", &n);

    printf("\nItems in the array are:  ");
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    return n;
}

int RecursiveLinearSearch(int A[], int n, int key) {
    if(n<0) { // Base case - not found
        return -1;
    }
    if(A[n]==key) { // Base case - found
        return n;
    }
    // Recursive case
    return RecursiveLinearSearch(A, n-1, key);
}
