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

        



};