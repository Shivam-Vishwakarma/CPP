//Compile Time Polymorphism - implementedt by Operator OverLoading.
#include<iostream.h>
#include<conio.h>fs
class Complex
{
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)   // param const.
    {
    real = r;
    imag = i;
    }
    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator + (Complex const &obj)  //copy const.
    {
	 Complex res;
	 res.real = real + obj.real;
	 res.imag = imag + obj.imag;
	 return res;
    }
    void print()
    {
    cout << real << " + i" << imag ;
    }
};
int main()
{clrscr();
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;     //call to "operator+"
    c3.print();
    getch();
}

