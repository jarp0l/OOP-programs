/*
 * 6. 
 * WAP in CPP to find the transpose of a given Matrix using the concept of OOP.
 */

#include <iostream>
#define ROW 100
#define COLUMN 100

using namespace std;

class Matrix {
    int m, n;
    int a[ROW][COLUMN];

    public:
        Matrix();
        void getOrder();
        void getMatrix();
        void printMatrix();
        Matrix transpose();
        ~Matrix(){};
};

Matrix::Matrix(){
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COLUMN; j++){
            a[i][j] = 0;
        }
    }
}

void Matrix::getOrder(){
    cin >> m >> n;
}

void Matrix::getMatrix(){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
}

void Matrix::printMatrix(){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

Matrix Matrix::transpose(){
    Matrix tmp;

    tmp.m = n;
    tmp.n = m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (i==j){
                tmp.a[i][j] = a[i][j];
            }
            else{
                tmp.a[i][j] = a[j][i];
            }
        }
    }
    return tmp;
}

int main(){
    Matrix A, B;
    cout << "Enter the order of matrix: ";
    A.getOrder();

    cout << "Enter the elements of matrix: " << endl;
    A.getMatrix();

    B = A.transpose();
    cout << "Transponse of the given matrix is: " << endl;
    B.printMatrix();

    return 0;
}