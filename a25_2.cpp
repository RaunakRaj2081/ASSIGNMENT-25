/* Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time. */

#include<iostream>
using namespace std;
class Time
{
  private:
  int hr,min,sec;
  public:
  void set(int a,int b, int c)
  {
    hr=a;
    min=b;
    sec=c;
  }
  void display()
  {
    cout<<hr<<" hr "<<min<<" min "<<sec<<" sec";
  }
};
int main()
{
    Time c;
    c.set(5,50,28);
    c.display();
    return 0;
}
