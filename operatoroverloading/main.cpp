#include <iostream>
using namespace std;
class com
{
public:
    double real,imag;
    com(double real=0.,double imag = 0.);
    com operator+(const com&) const;
};
com::com(double r,double i)
{
    real = r;
    imag = i;
}
com com::operator+ (const com& c) const
{
    com result;
    result.real = (this->real + c.real);
    result.imag = (this->imag + c.imag);
    return result;
}
int main()
{
    com x(4,6);
    com y(6,6);
    com z = x+y;
    cout<<z.imag;
    return 0;

}

