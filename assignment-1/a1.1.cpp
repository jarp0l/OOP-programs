/*
 * 1.
 * WAP in CPP that illustrates OOP concept
 */

#include <iostream>

using namespace std;

class Student {
    // private:
    char name[20];
    int roll_num;
    float marks;

    public:
    void getInfo(){
        cout << "\nEnter name, roll number and marks of student: " << endl;
        cin >> name >> roll_num >> marks;
    }

    void printInfo(){
        cout << "\nInformation of student: " << endl;
        cout << "Name: " << name << endl
             << "Roll Number: " << roll_num << endl
             << "Marks: " << marks << endl;
    }
};

int main(){
    Student s1, s2;
    s1.getInfo();
    s1.printInfo();

    s2.getInfo();
    s2.printInfo();
    return 0;
}