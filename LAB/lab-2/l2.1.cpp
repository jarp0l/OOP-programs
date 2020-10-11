/* 
 * Task #1:
 * Write a program in CPP to input the name, roll, marks and address of a student from the user and
 * display the entered details using the concept of class and object.
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
            cout << "\nDetails of student: " << endl;
            cout << name << " " << rollNum << " "  << marks << " " << address << endl;
        }
};

int main(){
    Student student;
    student.getDetails();
    student.printDetails();
    return 0;
}