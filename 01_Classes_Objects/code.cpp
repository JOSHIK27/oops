#include<iostream>
using namespace std;

class Student {
    private : 
        string name;
        int age;
    public: 
        Student(string n, int a) {
            name = n;
            age = a;
        }
        void print() {
            string str = "Student Name is " + name;
            cout<<str<<endl;
        }
};

int main() {
    Student s1("Joshik", 22); // creating at compile time (stack)
    Student *s2 = new Student("Chetana", 22); // dynamic memory allocation at run time (heap)
    s1.print();
    s2->print();
}