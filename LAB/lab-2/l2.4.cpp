/* 
 * Task #4:
 * Write a program in CPP to illustrate the concept of constructor(default, parameterized and copy
 * constructor) and destructor taking class complex as an example.
 */

#include <iostream>

using namespace std;

class Complex{
    float re, im;

    public:
        Complex(){      //default constructor
            re = 0.0;
            im = 0.0;
        }

        Complex(float r, float i){      //parameterized constructor
            re = r;
            im = i;
        }

        Complex(Complex &obj){    //copy constructor
            re = obj.re;
            im = obj.im;
        }

        Complex sum(Complex, Complex);

        void printSum();

        ~Complex(){
            cout << "\n---Destructed one object---" << endl;
        }
};

void Complex::printSum(){
    cout << "\n----------\nSum: ";
    cout << re << " + i " << im << endl;
    cout << "----------" << endl;
}

Complex Complex::sum(Complex c1, Complex c2){
    Complex tmp;

    tmp.re = c1.re + c2.re;
    tmp.im = c1.im + c2.im;

    return tmp;
}

int main(){
    Complex c1(3.414, 1.732);   //calling parameterized constructor
    Complex c2(c1);     //calling copy constructor
    Complex c3;         //calling default constructor

    c3 = c3.sum(c1, c2);    //sum of two objects, one initialized using parameterized and another copy constructor
    c3.printSum();          //outputs:   Sum: 6.828 + i 3.464

    return 0;
}