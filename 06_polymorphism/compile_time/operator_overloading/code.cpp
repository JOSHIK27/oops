#include<iostream>
using namespace std;

class Complex {
    public :
        int real, imaginary;

        Complex(int a, int b) {
            real = a, imaginary = b;
        }
        // this operator+ function takes only one argument
        Complex operator+(Complex &comp) {
            Complex result(0, 0);
            result.real = real + comp.real;
            result.imaginary = imaginary + comp.imaginary;
            return result;
        }
};

int main() {
    Complex c1(1, 2);
    Complex c2(2, 4);
    Complex c3 = c1 + c2;
    cout<<c3.real<<" "<<c3.imaginary<<endl;
}