#include <iostream>
#include <string>
using namespace std;
class Employee {
    private:
        int empID;
        string name;
        float basicSalary;
        float bonus;
        float totalSalary;

        public:
        Employee() : empID(0), name("Unknown"), basicSalary(0), bonus(0), totalSalary(0) {
            cout<<"Default constructor called for Employee"<<endl;
        }
            Employee(int id, string n,float salary,float b) {
                empID = id;
                name = n;
                basicSalary = salary;
                bonus = b;
                calculateTotalSalary();
                cout<<"Parameterized constructor called for Employee"<<endl;    
            
            }
        void calculateTotalSalary() {
                totalSalary = basicSalary + bonus;
            }   
            void displayEmployeeDetails() {
                cout << "Employee ID: " << empID << endl;
                cout << "Name: " << name << endl;
                cout << "Basic Salary: " << basicSalary << endl;
                cout << "Bonus: " << bonus << endl;
                cout << "Total Salary: " << totalSalary << endl;
            
  }
};
int main() {
    Employee emp1; // Default constructor
    emp1.displayEmployeeDetails();

    cout << endl;

    Employee emp2(101, "John Doe", 50000, 10000); // Parameterized constructor
    emp2.displayEmployeeDetails();

    return 0;
}