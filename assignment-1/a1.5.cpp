/*
 * 5.
 * WAP in CPP to find the sum of two distances(in feet and inch) entered by
 * the user using the concept of friend function.
 */

#include <iostream>

using namespace std;

class Distance {
    int feet, inch;

    public:
    Distance(){     // default contructor for the object
        feet = 0;
        inch = 0;
    }

    void getDistance(){
        cin >> feet >> inch;
    }

    void displayResult(){
        cout << "Final Output: "
             << feet << " ft " 
             << inch << " inch" << endl;
    }

    // tells the compiler that there exists a friend function outside this class
    // and return type of this functon is an instance of Distance class,
    // this also tells that it takes two parameters that are instance of Distance class
    friend Distance sum(Distance, Distance);

    ~Distance(){}; // destructor for the object
};

Distance sum(Distance dist1, Distance dist2){
    Distance tmp;
    int d1, d2;

    d1 = dist1.feet + dist2.feet;
    d2 = dist1.inch + dist2.inch;

    // d3 is of type int whose value remains constant throughout this function block
    // this is equivalent to performing floor division, that is, taking only the integer part
    const int d3 = d2/12;

    if (d3 > 0){
        d1 += d3;   // add the const value of d3 from above to d1
        d2 -= 12*d3; // multiple of 12 closest to and less than d3 is subtracted from d2
    }

    tmp.feet = d1;
    tmp.inch = d2;

    return tmp;
}

int main(){
    // create objects from Distance class and initliaze them according to the constructor
    Distance distance1, distance2, distance3;
    
    cout << "Enter distance in feet and inch: ";
    distance1.getDistance();
    
    cout << "Enter another distance in feet and inch: ";
    distance2.getDistance();
    
    // normal function call
    // as the return value of sum() is of type Distance class, so assigning that to distance3
    distance3 = sum(distance1, distance2);

    distance3.displayResult();

    return 0;
}