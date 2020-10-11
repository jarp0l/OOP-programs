/* 
 * Task #3:
 * Write a program in CPP to find the sum of two complex numbers using the OOP concept.
 */

#include <iostream>

using namespace std;

class Complex{
    float re, im;

    public:
        void getNumbers(){
            cout << "Enter a complex number(for e.g. for x+iy, enter: x y): " << endl;
            cin >> re >> im;
            cout << endl;
        }

        void printSum(){
            cout << "Sum of the complex numbers: ";
            cout << re << " + i " << im << endl;
        }

        Complex sum(Complex, Complex);
};

Complex Complex::sum(Complex c1, Complex c2){
    Complex tmp;

    tmp.re = c1.re + c2.re;
    tmp.im = c1.im + c2.im;

    return tmp;
}

int main(){
    Complex c1, c2, c3;
    c1.getNumbers();
    c2.getNumbers();

    c3 = c3.sum(c1, c2);
    c3.printSum();
    return 0;
}