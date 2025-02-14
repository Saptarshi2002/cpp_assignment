#include<iostream>
#include <fstream>
#include <sstream>

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
    ifstream inputFile("complex_number.txt");
    if(!inputFile){
        cerr << "Error opening file" << endl;
        return 1;
    }

    int real,imaginary;
    string line;
    while(getline(inputFile,line)){
        stringstream ss(line);
        if (ss >> real >> imaginary) {
            ComplexNumber c(real, imaginary);
            cout << "Read complex number: " << c << endl;
        } else {
            cerr << "Invalid line: " << line << endl;
        }
    }

    inputFile.close();
    return 0;
}

