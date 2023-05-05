// program to search an item lineraly
#include<stdio.h>

int searchitem(int a[],int item);

int main() {
    int myarr[5],x,i;
    printf("enter random number for array");
    for(i=0;i<5;i++) {
        scanf("%d",&myarr[i]);
    }
    printf("enter the item to be searched");
    scanf("%d",&x);
    int index=searchitem(myarr,x);
    if(index == -1)
        printf("item couldn't be found");
    else
        printf("the item found at index=%d",index);
        return 0;
}

int searchitem(int myarr[5], int index) {
    int i;

    for(i=0;i<=5;i++) {
        if(index == myarr[i]) {
            break;
        }
        else {
            if(i == 5)
                return -1;
        }
    }

    return i;
}
