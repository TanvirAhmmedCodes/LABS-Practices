#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex addComplex(Complex c1, Complex c2);
};

Complex addComplex(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main()
{
    Complex c1, c2, sum;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    sum = addComplex(c1, c2);

    cout << "Sum of complex numbers: ";
    sum.display();

    return 0;
}
