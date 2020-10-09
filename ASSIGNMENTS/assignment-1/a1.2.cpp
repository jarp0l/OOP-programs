/*
 * 2.
 * WAP in CPP to illustrate the concept of default arguments.
 */

#include <iostream>

using namespace std;

float calculateProduct(float x = 1, float y = 1, float z = 1){
    return (x*y*z);
}

int main(){

    cout << calculateProduct(12, 8, 4) << endl; //12*8*4 = 384
    cout << calculateProduct(12, 8) << endl; //12*8*1 = 96
    cout << calculateProduct(12) << endl; //12*1*1 = 12
    cout << calculateProduct() << endl; //1*1*1 = 1

    return 0;
}