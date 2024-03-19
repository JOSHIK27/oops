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
};

class Manager : public Employee {
    public : 
        void print() {
            cout<<"Hii from manager class";
        }
};

int main() {
    Employee e;
    e.print();
    Manager m;
    m.print();
    // although manager class is inherting from employee class, the inherited class methods are overridden
    // this is called function overriding
}