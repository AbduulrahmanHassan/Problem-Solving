// operator overloading
#include <iostream>
using namespace std;

class Complex
{
    int imag;
    int real;

public:
    // constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex(Complex  &obj )
    {
        real = obj.real;
        imag = obj.imag;
    }

    // OverLoading ++
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = this->real + c.real;
        temp.imag = this->imag + c.imag;
        return temp;
    }
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = this->real - c.real;
        return temp;
    }

    Complex operator++(int)
    {
        real++;
        imag++;
        return *this;
    }
    bool operator==(Complex c)
    {
        if (this->real == c.real && this->imag == c.imag)
        {
            return true;
        }
        else{
            return false;
        }
    }

    Complex operator--(int)
    {
        real--;
        imag--;
        return *this;
    }
    void displayPlus()
    {
        cout << real << "+i" << imag << endl;
    }
    void displayNeg()
    {
        cout << real << endl;
    }
};

int main()
{

    Complex c1(3, 5);
    Complex c2(3, 5);
    Complex c5(c1);

   //copyConstructor
    c5.displayPlus();

    // add
    Complex c3 = c1 + c2;
    c3.displayPlus();

    // sub
    Complex c4 = c1 - c2;

    c4.displayNeg();

    // inceremnt
    c3++;
    c3.displayPlus();

    // decremnet
    c3--;
    c3.displayPlus();

    if(c1 == c2)
    {
      cout<<"real = real and "  << "imag = imag"<< endl;
    }
    else{
        cout<< "c1 not equal c2";
    }
}