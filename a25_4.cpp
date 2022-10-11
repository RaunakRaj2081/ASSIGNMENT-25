/* Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class. */

#include<iostream>
using namespace std;
class LargestNumber
{
    private:
    int a,b,c;
    public:
    void set()
    {
       
        cout<< "Enter three numbers : ";
        cin>> a>>b>>c;
        
    }
    void largest()
    {
        if(a>b && a>c)
        cout<<"The largest number is "<<a;
        else if(b>a && b>c)
        cout<<"The largest number is "<<b;
        else 
        cout<<"The largest number is "<<c;
    }
};
int main()
{
    LargestNumber c;
    c.set();
    c.largest();
    return 0;
}