#include<iostream>
using namespace std;

class Employee {
    private :
        string name;
        int age;
        string dob;
    public:
        void print() {
            cout<<"Hii from employee class"<<endl;
        }
        virtual void printSalary() {
            cout<<"The average salary for employee is 20k per month"<<endl;
        }
};
// virtual functions let the compiler decide which function has to be executed at the run time
class Manager : public Employee {
    public : 
        void print() {
            cout<<"Hii from manager class";
        }
        void printSalary() {
            cout<<"The salary for manager is 50k per month"<<endl;
        }
};

int main() {
    Manager *m = new Manager();
    Employee *e;
    e = m;
    e->printSalary();
}
// A virtual function (also known as virtual methods) is a member function that is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the method.