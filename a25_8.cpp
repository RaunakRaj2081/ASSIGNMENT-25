// Define a class Rectangle and define an instance member function to find the area of the rectangle.

#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int len,b,area;
    public:
    void set()
    {
        cout<<"Enter length and breadth of rectangle :";
        cin>>len>>b;
    }
    void calculatearea()
    {
      area=len*b;
      cout<< "The area of rectangle is "<<area;
    }   
};
int main()
{
    Rectangle c;
    c.set();
    c.calculatearea();
    return 0;
}
