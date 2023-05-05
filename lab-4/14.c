// Program to implement the validity of the argument by using the truth table.
#include<stdio.h>

void displaymatrix(char [][7]);

int main() {
    char truthtable[4][7];
    int i;

    truthtable[0][0] = truthtable[1][0] = 'T';
    truthtable[2][0] = truthtable[3][0] = 'F';
    truthtable[0][1] = truthtable[2][1] = 'T';
    truthtable[1][1] = truthtable[3][1] = 'F';
    //!p
    for(i =0; i <4; i++ ) {
        if(truthtable[i][0] == 'T')
            truthtable[i][2] = 'F';
        else
            truthtable[i][2] = 'T';
    }
    //!q
    for(i =0; i <4; i++ ) {
        if(truthtable[i][1] == 'F')
            truthtable[i][3] = 'T';
        else
            truthtable[i][3] = 'F';
        //printf("%c\n", truthtable[i][3]);
    }
    //p and q
    for(i =0; i <4; i++ ) {
        if(truthtable[i][0] == 'T' && truthtable[i][1] == 'T')
            truthtable[i][4] = 'T';
        else
            truthtable[i][4] = 'F';
    }
    //!(p and q)
    for(i =0; i <4; i++ ) {
        if(truthtable[i][4] == 'T')
            truthtable[i][5] = 'F';
        else
            truthtable[i][5] = 'T';
    }
    //!p or !q
    for(i =0; i <4; i++ ) {
        if(truthtable[i][2] == 'T' || truthtable[i][3] == 'T')
            truthtable[i][6] = 'T';
        else
            truthtable[i][6] = 'F';
    }
    displaymatrix(truthtable);
    return 0;
    //displaymatrinx(truthtable);
}

void displaymatrix(char tt[][7]) {
    char *truthtable[] = {"P","Q","!P","!Q","P&&Q","!(P&&Q)","!P OR!Q"};
    int i, j;
    for(i = 0; i <=6; i++)
        printf("%s\t", truthtable[i]);
    printf("\n-------------------------------------------------------\n");
    for(i= 0; i < 4; i++ ) {
        for(j = 0; j<= 6; j++ ) {
            if(j >= 4 )
                printf("  ");
            printf("%c\t", tt[i][j]);
        }
        printf("\n");
    }
}
