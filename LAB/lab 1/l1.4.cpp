/*
 * Task #4:
 * WAP in CPP to illustrate the concept of inline function.
 *
 * Square of first n numbers
 */
#include <iostream>

using namespace std;

inline int cube(int n){ return n*n*n; }

int main() {
    int n = 0;
    int sum = 0;

    cout << "\n::Square of first n numbers::\n";
    cout << "Enter a number: ";
    cin >> n;
    
    while(n >= 1){
        sum += cube(n);
        n -= 1;
    }
    cout << sum << endl;

    return 0;
}