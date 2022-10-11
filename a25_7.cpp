// Define a class Greatest and define instance member function to find Largest among 3 numbers using classes.

#include<iostream>
using namespace std;
class Greatest
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
    Greatest c;
    c.set();
    c.largest();
    return 0;
}

