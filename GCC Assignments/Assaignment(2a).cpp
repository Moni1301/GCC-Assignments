#include <iostream>

using namespace std;


class Complex{
public:int real,imaginary;
Complex(int tempreal=0,int tempimaginary=0)
{

    real=tempreal;
    imaginary=tempimaginary;
}
Complex add(Complex c1, Complex c2)
{

    Complex temp;
    temp.real=c1.real+c2.real;
    temp.imaginary=c1.imaginary+c2.imaginary;
    return temp;
}
Complex difference(Complex c1,Complex c2)
{
    Complex val;
    val.real=c1.real-c2.real;
    val.imaginary=c1.imaginary -c2.imaginary;
    return val;
}
Complex product(Complex c1,Complex c2)
{
    Complex val;
    val.real=c1.real*c2.real-c1.imaginary*c2.imaginary;
    val.imaginary=c1.real*c2.imaginary+c1.imaginary*c2.real;
    return val;
}
};

int main()
{
    Complex c1(3,2);
    Complex c2(9,5);
    Complex c3;
    c3=c3.add(c1,c2);
    cout<<"sum\t"<<c3.real<<"+i"<<c3.imaginary;
    Complex c4;
    c4=c4.difference(c1,c2);
    cout<<"\nDifference\t"<<c4.real<<c4.imaginary<<"i\n";
    Complex c5;
    c5=c5.product(c1,c2);
    cout<<"product\t"<<c5.real<<"+"<<c5.imaginary<<"i";

    return 0;
}
