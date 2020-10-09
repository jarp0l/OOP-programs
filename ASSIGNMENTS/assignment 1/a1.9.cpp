/*
 * 9. 
 * WAP in CPP to sort the details of n students entered by the user in the
 * order of their marks using OOP concept. Also display the details of
 * students obtaining highest and third highest marks. Assume n>=3.
 */

#include <iostream>
#define MAX_SIZE 1000
using namespace std;

class Student {
    public:
        void getSudentCount();
        void getStudentInfo();
        void sort();
        void printStudentInfo(int);

    private:
        int n;
        float marks[MAX_SIZE];
        int rollNum[MAX_SIZE];
        void checkStudentCount();
};

void Student::checkStudentCount(){
    if(n < 3){
        cout << "Please enter number greater than 2." << endl;
        getSudentCount();
    };
}

void Student::getSudentCount(){
    cout << "\nNo. of students: ";
    cin >> n;
    checkStudentCount();
}=

void Student::getStudentInfo(){
    for (int i = 0; i < n; i++){
        cout << "\nFor student " << i+1 << ": " << endl;
        cout << "Roll number: ";
        cin >> rollNum[i];

        cout << "Marks: ";
        cin >> marks[i];
    }
}

void Student::sort(){       //bubble sort algorithm
    float tmpMarks;
    int tmpRollNum;
    for(int i = 0; i < (n-1); i++){
        for(int j = 0; j<(n-i-1); j++){
            if(marks[j] < marks[j+1]){  //descending order
                    tmpMarks = marks[j];
                    marks[j] = marks[j+1];
                    marks[j+1] = tmpMarks;

                    tmpRollNum= rollNum[j];
                    rollNum[j] = rollNum[j+1];
                    rollNum[j+1] = tmpRollNum;
            }
        }
    }
}

void Student::printStudentInfo(int position){
        if (position == 0){
            for (int i = 0; i < n; i++){
                cout << "For student " << i+1 << ": " << endl;
                cout << "Roll number: " << rollNum[i] << endl;
                cout << "Marks: " << marks[i] << endl << endl;
            }
        }

        else{
            cout << "Roll number: " << rollNum[position-1] << endl;
            cout << "Marks: " << marks[position-1] << endl;
        }
}

int main(){
    Student student;
    student.getSudentCount();

    cout << "\n::Details of students:: " << endl;
    student.getStudentInfo();
    cout << endl;

    student.sort();

    cout << "\nDetails of all students in descending order of marks:" << endl;
    student.printStudentInfo(0);    //prints details of all students

    cout << "\n\nDetails of student with the highest marks: " << endl;
    student.printStudentInfo(1);    //prints the details according to highest marks

    cout << "\nDetails of student with the third highest marks: " << endl;
    student.printStudentInfo(3);    //prints the details according to third highest marks

    return 0;
}