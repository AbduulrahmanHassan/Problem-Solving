#include <iostream>
using namespace std;


class Complex
{
 float real, imag;
    static int counter ;

public:
Complex() {
    real = imag = 0;
    counter ++;
}

Complex(int a, int b) {
    this->real = a;
    this->imag = b;
    counter++;
}

    int getReal()
    {
        return this->real;
    }
    int getImag()
    {
        return this->imag;
    }
    void setReal(int real)
    {
        this->real = real;
    }
    void setImag(int imag)
    {
        this->imag = imag;
    }
    ~Complex()
    {
        cout << "Destroying (" << real << ", " << imag << "i)" << endl;
    }

Complex add(Complex *c)
{
    Complex temp;
    temp.real = real + c->real;
    temp.imag = imag + c->imag;
    counter++;
    return temp;
}

    void show()
    {
        if (imag < 0)
            cout << real << imag << "i" << endl;
        else if (imag == 0)
            cout << real << endl;
        else
            cout << real << " + i" << imag << endl;
        counter++;
        cout << counter;
    }
};

int Complex::counter;


int main()
{
    Complex c1(2, 3);
    Complex c2(4, -5);
    Complex c3 = c1.add(&c2);
    c3.show();

    cout << endl;
    // Complex1 c11(2, 3);
    // Complex1 c22(4, -5);
    // Complex1 c33 = c11.add(&c22);
    // c33.show();
    return 0;
}