/* . Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc */

#include<iostream>
using namespace std;
class Area
{
private:
int l,b,a,r,a1,a2;
float a3;
public:
void area1(int x)
{
    a=x;
}
int calarea1()
{
    a1=a*a;
    return a1;

}
void area2(int y,int z)
{
    l=y;
    b=z;
}
int calarea2()
{
    a2=l*b;
    return a2;

}void area3(int w)
{
    r=w;
}
float calarea3()
{
    a3=(3.14)*r*r;
    return a3;

}

};
int main()
{
    Area c1,c2,c3;
    c1.area1(5);
    c1.calarea1();
    c2.area2(8,5);
    c2.calarea2();
    c3.area3(5);
    c3.calarea3();
    cout<<"The area of square is "<<c1.calarea1()<<endl;
    cout<<"The area of square is "<<c2.calarea2()<<endl;
    cout<<"The area of square is "<<c3.calarea3()<<endl;
    return 0;
}
