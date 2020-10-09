/*
 * 10...
 * ...When do we use static data member and static function in a
 * class? Exemplify.
 */

#include <iostream>

using namespace std;

class Employee {
    public:
        Employee(int s = 50000){
            salary = s;
        };

        void increaseSalary(){
            salary += salary*0.15;  //increase salary of every employee by 15% and round-off
            increaseCount();
        };

        static void printCount(){
            cout << counter << endl;
        };

        void printSalary(){
            cout << salary << endl;
        };

    private:
        static int counter;
        int salary;

        static void increaseCount(){
            ++counter;
        };
};

int Employee::counter{ 0 };

int main(){
    Employee emp1(60000), emp2, emp3(80000);
    emp1.increaseSalary();
    cout << "Employee: ";
    emp1.printCount();
    cout << "Salary: ";
    emp1.printSalary();
    cout << endl;

    emp2.increaseSalary();
    cout << "Employee: ";
    emp2.printCount();
    cout << "Salary: ";
    emp2.printSalary();
    cout << endl;

    emp3.increaseSalary();
    cout << "Employee: ";
    emp3.printCount();
    cout << "Salary: ";
    emp3.printSalary();

    return 0;
}