#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of Matrix 1: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of Matrix 2: ";
    cin >> r2 >> c2;

    int A[r1][c1], B[r2][c2], add[r1][c1], sub[r1][c1], mul[r1][c2];

    cout << "\nEnter elements of Matrix 1:\n";
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            cin >> A[i][j];

    cout << "\nEnter elements of Matrix 2:\n";
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            cin >> B[i][j];

    
    if(r1==r2 && c1==c2) {
        cout << "\nMatrix Addition:\n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                add[i][j] = A[i][j] + B[i][j];
                cout << add[i][j] << " ";
            }
            cout << endl;
        }

        
        cout << "\nMatrix Subtraction:\n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                sub[i][j] = A[i][j] - B[i][j];
                cout << sub[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "\nAddition and Subtraction not possible\n";
    }


    if(c1==r2) {
        cout << "\nMatrix Multiplication:\n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                mul[i][j] = 0;
                for(int k=0;k<c1;k++){
                    mul[i][j] += A[i][k] * B[k][j];
                }
                cout << mul[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "\nMultiplication not possible\n";
    }

    return 0;
}
