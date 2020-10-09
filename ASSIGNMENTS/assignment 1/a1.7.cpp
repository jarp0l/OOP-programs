/*
 * 7. 
 * WAP in CPP to find the sum of two distance object with feet and inch as
 * the members.
 */

#include <iostream>

using namespace std;

class Distance {
    int feet, inch;

    public:
    Distance(){
        feet = 0;
        inch = 0;
    }

    void getDistance(){
        cin >> this->feet >> this->inch;
    }

    void displayResult(){
        cout << "Final Output: "
             << this->feet << " ft " 
             << this->inch << " inch" << endl;
    }

    Distance sum(Distance, Distance);

    ~Distance(){};
};

Distance Distance::sum(Distance dist1, Distance dist2){
    Distance tmp;
    int d1, d2;

    d1 = dist1.feet + dist2.feet;
    d2 = dist1.inch + dist2.inch;

    const int d3 = d2/12;

    if (d3 > 0){
        d1 += d3;
        d2 -= 12*d3;
    }

    tmp.feet = d1;
    tmp.inch = d2;

    return tmp;
}

int main(){
    Distance distance1, distance2, distance3;
    
    cout << "Enter distance in feet and inch: ";
    distance1.getDistance();
    
    cout << "Enter another distance in feet and inch: ";
    distance2.getDistance();
    
    distance3 = distance3.sum(distance1, distance2);

    distance3.displayResult();

    return 0;
}