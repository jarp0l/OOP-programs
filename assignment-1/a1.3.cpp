/*
 * 3.
 * Explain how the use of default argument supports the function overloading
 * with suitable example.
 */

#include <iostream>

using namespace std;

float sum(int a = 0, float b = 0.0, int c = 0){
    return (a + b + c);
}

int main(){
    cout << sum(23, 35.6, 56) << endl; //23 + 35.6 + 56 = 114.6
    cout << sum(23, 35.6) << endl; //23 + 35.6 + 0 = 58.6
    cout << sum(23) << endl; //23 + 0 + 0.0 + 0 = 23
    cout << sum() << endl; //0 + 0.0 + 0 = 0
    return 0;
}