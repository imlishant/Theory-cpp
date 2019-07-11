#include <iostream>

using namespace std;

class Complex
{
    public:
        Complex(int = 0, int = 0);
        Complex operator+ (Complex const&);
        void print();
    private:
        int real;
        int img;
};

Complex::Complex(int r, int i)
{
    real = r;
    img = i;
}

Complex Complex::operator+ (Complex const &obj)
{
    this->real = real + obj.real;
    this->img = img + obj.img;
    return *this;
}

void Complex::print()
{
    cout << real << " + j" << img << endl;
}

int main()
{
    Complex a(10, 5), b(2, 4);
    Complex c = a + b;
    c.print();
    return 0;    
} 