#include<iostream>
using namespace std;

class Student {
    public : 
        string name;
        int age;

        Student() {
            cout<<"Student constructor invoked"<<endl;
        }
        Student(string n, int a) {
            cout<<"Paremterized Student constructor invoked"<<endl;
            name = n;
            age = a;
        }
        Student(Student &s) {
            cout<<"Copy constructor invoked"<<endl;
            name = s.name;
            age = s.age;
        }
};

int main() {
    Student s1;
    Student s2("Joshik", 22);
    //2 ways to invoke copy constructors
    Student s3 = s2;
    Student s4(s2);
    // assigment operator
    Student s5;
    s5 = s2;
}