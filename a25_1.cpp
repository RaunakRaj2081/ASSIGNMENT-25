/* Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number */

#include<iostream>
using namespace std;
class complex 
{
    private:
    int real, img;
    public:
    void set(int a, int b)
    {
        real=a;
        img=b;
    }
    void print()
    {
        cout<<"Real part = "<< real<< "   Imaginary part = "<< img<< endl;
        cout<<real <<" + i"<<img;
    }
};
int main()
{
    complex c;
    c.set(4,5);
    c.print();
    return 0;
}
