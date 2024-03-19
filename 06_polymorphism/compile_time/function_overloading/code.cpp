#include<iostream>
using namespace std;

class number {

    public: 
        void sum(int a, int b) {
            cout<<a+b<<endl;
        }
        void sum(float a, float b) {
            cout<<a+b<<endl;
        }
        void sum(int a, float b) {
            cout<<a+b<<endl;
        }
};

// function oveloading 
    // same name and diffefent paramters


int main() {
    number num;
    num.sum(1, 2);
    num.sum((float)1.0, (float)3.5);
    num.sum(1, (float)1.5);
}