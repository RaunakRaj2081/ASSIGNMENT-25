// Define a class Circle and define an instance member function to find the area of the circle.

#include<iostream>
using namespace std;
class circle
{
  private:
int r;
float area;
public:
void set()
{
    cout<<"Enter the radius of circle : ";
    cin>>r;
}
void calculatearea()
{
 area=(3.14)*r*r;
 cout<<"The area of circle is "<< area;
}

};
int main()
{
    circle c;
c.set();
c.calculatearea();
return 0;
}
