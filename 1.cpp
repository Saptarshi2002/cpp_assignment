#include<iostream>

using namespace std;

class ComplexNumber {
    private :
        int real;
        int imaginary;

    public:
        ComplexNumber(){
            real =0;
            imaginary =0;
        };

        ComplexNumber(int r,int i){
            real =r;
            imaginary =i;
        };

        ComplexNumber(const ComplexNumber& cn){
            real = cn.real;
            imaginary = cn.imaginary;
        };

        void add(int r,int i){
            real += r;
            imaginary += i;
        };

        void add(const ComplexNumber& cn) {
        real += cn.real;
        imaginary += cn.imaginary;
    }

    ComplexNumber operator+(const ComplexNumber& cn) {
        return ComplexNumber(real + cn.real, imaginary + cn.imaginary);
    }


    friend ostream& operator<<(ostream& os, ComplexNumber& c) {
        os << c.real << "+" << c.imaginary << "i";
        return os;
    };

};

int main() {
    // Testing the ComplexNumber class
    ComplexNumber c1; // Default constructor
    ComplexNumber c2(3, 4); // Parameterized constructor
    ComplexNumber c3 = c2; // Copy constructor

    cout << "Initial c1: " << c1 << endl;
    cout << "Initial c2: " << c2 << endl;
    cout << "Initial c3: " << c3 << endl;

    // Using the add methods
    c1.add(2, 3);
    cout << "After c1.add(2, 3): " << c1 << endl;

    c1.add(c2);
    cout << "After c1.add(c2): " << c1 << endl;

    // Using the '+' operator
    ComplexNumber c4 = c1 + c3;
    cout << "After c4 = c1 + c3: " << c4 << endl;

    return 0;
}

