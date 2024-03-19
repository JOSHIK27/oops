#include<iostream>
using namespace std;

class Student {
    public : 
        string name;
        int age;
        int *randomPointer;
        Student(string n, int a, int *address) {
            name = n;
            age = a;
            randomPointer = address;
        }
        //shallow copy
        Student(Student &s) {
            name = s.name;
            age = s.age;
            randomPointer = s.randomPointer;
        }
        //deep copy
        Student(Student &s) {
            name = s.name;
            age = s.age;
            int temp = *(s.randomPointer);
            randomPointer = &temp;
        }
};

int main() {
    int temp = 10;
    int *randomAddress = &temp;
    Student s("Joshik", 22, randomAddress);
    cout<<*(s.randomPointer)<<endl;
    Student s2(s);
    cout<<*(s2.randomPointer)<<endl;
}