/*
 * 8.
 * WAP in CPP to find the product of two matrices using OOP concept.
 */

#include <iostream>
#define ROW 100
#define COLUMN 100

using namespace std;

class Matrix {
    int m, n, q;
    int a[ROW][COLUMN];

    public:
    Matrix();
    void getOrderOfMatrix();
    void getMatrix();
    void printProduct();
    Matrix calculateProduct(Matrix, Matrix);
    friend Matrix validateOrder(Matrix, Matrix);
    ~Matrix(){};
};

Matrix::Matrix(){
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COLUMN; j++){
            a[i][j] = 0;
        }
    }
    
}

void Matrix::getOrderOfMatrix(){
    cout << "Enter the order of matrix (for eg.: 2 2): " << endl;
    cin >> m >> n;
    cout << endl;
}

Matrix validateOrder(Matrix A, Matrix B){
    Matrix C;
     if(A.n!=B.m){
        cout << "You can't find product of such matrix.\n----------\n" << endl;

        A.getOrderOfMatrix();
        B.getOrderOfMatrix();
        C = validateOrder(A, B);
    }
    else{
        C.n = A.n; //or B.m
        C.m = A.m;
        C.q = B.n;
    }
    return C;
}

void Matrix::getMatrix(){
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout << "Element at a" << i << j << " : ";
                cin >> a[i][j];
            }
            cout << endl;
        }
    }

void Matrix::printProduct(){
        for(int i = 0; i < m; i++){
            for(int j = 0; j < q; j++){
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }

Matrix Matrix::calculateProduct(Matrix A, Matrix B){
    Matrix C;
    int result;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < q; j++){
            result = 0;
            for(int k = 0; k < q; k++){
                result += A.a[i][k]*B.a[k][j];
            }
            C.a[i][j] = result;
        }
    }
    return C;
}

int main(){
    Matrix A, B, C;

    A.getOrderOfMatrix();
    B.getOrderOfMatrix();
    C = validateOrder(A, B);

    cout << "Enter the elements of first matrix:" << endl;
    A.getMatrix();
    cout << endl;

    cout << "Enter the elements of second matrix:" << endl;
    B.getMatrix();
    cout << endl;

    C = C.calculateProduct(A, B);
    cout << "The product matrix is: " << endl;
    C.printProduct();

    return 0;
}


/*
::2x2 matrix:::
a00 a01   *  b00 b01    =     c00 c01
a10 a11      b10 b11          c10 c11

c00 = a00*b00 + a01*b10
c01 = a00*b01 + a01*b11

c10 = a10*b00 + a01*b10
c11 = a10*b01 + a11*b11
*/