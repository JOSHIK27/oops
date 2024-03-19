#include<iostream>
using namespace std;

class Student {
    public : 
        string name;
        int age;

        Student() {
            cout<<"Student constructor invoked"<<endl;
        }
        ~Student() {
            cout<<"Destructor invoked"<<endl;
        }
};

void sampleFunction() {
    Student temp;
}

int main() {
    Student s;
    if(1 == 1){
        Student s1;
    }
    sampleFunction();
    cout<<"Last Line"<<endl;
}
//The following are the main properties of Destructor:
// The destructor function is automatically invoked when the objects are destroyed.
// It cannot be declared static or const.
// The destructor does not have arguments.
// It has no return type not even void.
// An object of a class with a Destructor cannot become a member of the union.
// A destructor should be declared in the public section of the class.
// The programmer cannot access the address of the destructor.


// When is the destructor called?
// A destructor function is called automatically when the object goes out of scope:
// the function ends 
// the program ends 
// a block containing local variables ends 
// a delete operator is called  

// if we want to prevent the destruction of an object we can make our destructor private
// private: ~Student(){}