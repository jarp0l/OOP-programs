/*
 * Task #5:
 * WAP in CPP to illustrate the concept of default arguments.
 */
#include <iostream>

using namespace std;

float calculateProduct(float x = 1, float y = 1, float z = 1){
    return (x*y*z);
}

int main(){
    cout << calculateProduct(23, 17, 8) << endl;
    cout << calculateProduct(23, 17) << endl;
    cout << calculateProduct(23) << endl;
    cout << calculateProduct() << endl;

    return 0;
}