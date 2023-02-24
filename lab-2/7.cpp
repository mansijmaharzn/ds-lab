// WAP to implement the meet and join of the binary
#include<iostream>
using namespace std;

class JoinMeet {
    public:
        void matrixInput(int mat[][3]) {
            for(int i=0; i < 2; i++) {
                for (int j=0; j<3; j++) {
                    cin >> mat[i][j];
                }
            }
        }

        void display(int mat[][3]) {
            for(int i=0; i < 2; i++) {
                for (int j=0; j<3; j++) {
                    cout << mat[i][j] << '\t';
                }
                cout << '\n';
            }
        }

        void meetMat(int A[][3], int B[][3], int res[][3]) {
            for(int i=0; i < 2; i++) {
                for (int j=0; j<3; j++) {
                    res[i][j] = A[i][j] && B[i][j]; // and-ing value of two sets and storing 
                }
            }
        }

        void joinMat(int A[][3], int B[][3], int res[][3]) {
            for(int i=0; i < 2; i++) {
                for (int j=0; j<3; j++) {
                    res[i][j] = A[i][j] || B[i][j]; // or-ing value of two sets and storing 
                }
            }
        }
};

int main() {
    JoinMeet jm;
    int A[2][3], B[2][3], res[2][3];

    cout << "Input (0, 1) for matrix A" << endl;
    jm.matrixInput(A);

    cout << "Input (0, 1) for matrix B" << endl;
    jm.matrixInput(B);

    jm.meetMat(A, B, res);
    cout << "Displaying matrix after meeting matrix" << endl;
    jm.display(res);
    
    jm.joinMat(A, B, res);
    cout << "Displaying matrix after joining matrix" << endl;
    jm.display(res);

    return 0;
}


/*
To Enter:
A = 1 0 1       B = 0 1 0
    0 1 0           1 1 0

OUTPUT:
Input (0, 1) for matrix A
1
0
1
0
1
0
Input (0, 1) for matrix B
0
1
0
1
1
0
Displaying matrix after meeting matrix
0       0       0
0       1       0
Displaying matrix after joining matrix
1       1       1
1       1       0
*/