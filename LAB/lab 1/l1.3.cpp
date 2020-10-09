/* 
 * Task #3:
 * WAP in CPP to find the area of circle and rectangle using the concept of function overloading.
 */
#include <iostream>

using namespace std;

class Area {

    public:
    void area(float r){
        const float PI = 3.1415;
        cout << PI*r*r << endl;
    }
    
    void area(float l, float b){
        cout << l*b << endl;
    }
};

int main(){
    Area a1, a2;
    float r, l, b;
    r = 1;
    l = 2;
    b = 3;
    a1.area(r);
    a2.area(l, b);
    return 0;
}