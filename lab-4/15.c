// Implementation of Merge Sort (divide and conquer algorithm)
#include<stdio.h>
#define max 20

//function prototypes
void fillArray(int [], int);
void display(int [], int);
void merge(int [], int, int, int);
void merge_sort(int [], int, int);

int main() {
    int arr[max];
    int n;
    printf("How many integers to input in array? ");
    scanf("%d",&n);
    fillArray(arr, n);
    printf("\n\n***Array Before Sorting***\n");
    display(arr, n);
    merge_sort(arr, 0, n-1);
    printf("\n\n***Array After Sorting***\n");
    display(arr, n);
    printf("\n");

    return 0;
}

//This function fills array with array elements
void fillArray(int myarr[], int sz) {
    printf("\nInput Array Elements\n");

    for(int i = 0; i < sz; i++) {
      scanf("%d",&myarr[i]);
    }
}

//This function displays the array elements
void display(int myarr[], int sz) {
    printf("Array Elements are: ");
    for(int i = 0; i < sz; i++) {
        printf("\t%d",myarr[i]);
    }
}

//This function divides the array into sub-array at the mid of the original array
void merge_sort(int myarr[], int BEG, int END) {
    if (BEG < END) {
        int MID = (BEG + END)/2;
        merge_sort(myarr, BEG, MID);
        merge_sort(myarr, MID+1, END);
        merge(myarr, BEG, MID, END);
    }
}

//this function conquers the divided array
void merge(int myarr[], int BEG, int MID, int END) {
    int I = BEG, J = MID + 1, INDEX = BEG;
    int TEMP[max];
    while(I <= MID && J <= END) {
        if(myarr[I] < myarr[J]) {//fill temp array with elements in ascending order
            TEMP[INDEX] = myarr[I];
            I++;
        }
        else {
            TEMP[INDEX] = myarr[J];
            J++;
        }
        INDEX++;
    }
    //Copy the remaining elements of right sub-array, if any
    if(I > MID) {
        while (J <= END) {
            TEMP[INDEX] = myarr[J];
            INDEX++;
            J++;
        }
    }
    //Copy the remaining elements of left sub-array, if any
    else {
        while (I <= MID) {
            TEMP[INDEX] = myarr[I];
            INDEX++;
            I++;
        }
    }

    //Copy the contents of TEMP back to MYARR
    int K = BEG;
    while(K < INDEX) {
        myarr[K] = TEMP[K];
        K++;
    }
}
