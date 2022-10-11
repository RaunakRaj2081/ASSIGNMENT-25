// Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.

#include<iostream>
using namespace std;
class ReverseNumber
{ 
    private:
int n;
int reverse=0,remainder;
public:
void set()
{
    cout<< "Enter a number : ";
    cin>>n;
}
int reverseN()
{
   while(n!=0)
   {
     remainder=n % 10;
     reverse=reverse * 10 + remainder;
     n=n/10;
   }
   return reverse;
}


};
int main()
{
    ReverseNumber c;
    c.set();
    c.reverseN();
    cout<<" The reverse of the above number is "<<c.reverseN();
    return 0;
}

