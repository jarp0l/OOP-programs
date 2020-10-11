/* 
 * Task #2:
 * Write a program in CPP to input the name, roll, marks and address of n students from the user and
 * display the entered details using the concept of class and objects.
 */

#include <iostream>

using namespace std;

class Student{
    char name[20], address[20];
    int rollNum;
    float marks;

    public:
        void getDetails(){
            cout << "Enter name, roll number, marks and address: " << endl;
            cin >> name >> rollNum >> marks >> address;
        }

        void printDetails(){
            cout << name << " " << rollNum << " "  << marks << " " << address << endl;
        }
};

int main(){
    Student student[1000];
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "\nFor student " << i+1 << endl;
        student[i].getDetails();
    }

    cout << "\n----------" << endl;
    
    for(int i = 0; i < n; i++){
        cout << "\nFor student " << i+1 << endl;
        student[i].printDetails();
    }
    return 0;
}