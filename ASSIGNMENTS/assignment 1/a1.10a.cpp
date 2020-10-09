/*
 * 10. 
 * Explain the relation between constant object and constant function with
 * example.
 */

#include <iostream>

using namespace std;

class Date {
    int day, month;

    public:
        Date(int d = 1, int m = 1){
            day = d;
            month = m;
        }

        void showDate() const{
            cout << day << " " << month << endl;
        }

        void showDay(){
            cout << day << endl;
        }
};

int main(){
    const Date date(12, 30);
    date.showDate();    //displays: 12 30
    // date.showDay();  //will throw error if uncommented
    return 0;
}