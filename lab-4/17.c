// Program to represent the simple undirected graph using adjacency matrix
#include<stdio.h>

void undir_graph();
void read_graph(int [][10], int);
void display(int [][10], int);

int main() {
    undir_graph();

    return 0;
}

void undir_graph() {
    int adj_mat[10][10];
    int n; // to store no of vertices

    printf("How many vertices of the graph?  ");
    scanf("%d",&n);
    // initializing the adjacency matrix with zeros
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            adj_mat[i][j] = 0;
        }
    }

    read_graph(adj_mat, n);
    display(adj_mat, n);
}

void read_graph(int mat[10][10], int n) {
    int i, j;//Loop control variable
    int flag;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            if(i == j) {
                mat[i][j] = 0;
                continue;
            }
            printf("\nAre vertices %d and %d Adjacent? (1/0) ",i,j);
            scanf("%d",&flag);
            if(flag == 1) {
                mat[i][j] = 1;
            }
            else
                mat[i][j] = 0;
        }
    }
}

// Displays the Adjacency matrix
void display(int mat[10][10], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}
