#include<iostream>
using namespace std;

class Student {
    private : 
        string name;
    public: 
        Student() {
            cout<<"1st constructor invoked"<<endl;
        }
        Student(string n, int a) {
            cout<<"2nd constructor invoked"<<endl;
        }
        Student(int a, int b, int c) {
            cout<<"3rd constructor invoked"<<endl;
        }
};

int main() {
    Student s1, s2("Joshik", 22), s3(1,2,3);
}