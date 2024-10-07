#include<iostream>
using namespace std;

int main()
{
  int a,b;
  cout<<"Enter value of a: "; //Taking input
  cin>>a;
  cout<<"Enter value of b: ";//Taking input
  cin>>b;
  
  cout<<"Before swap:"<<endl;                                //Showing a and b values before swap
  cout<<"Value of a: "<<a<<endl<<"Value of b: "<<b<<endl;
  
  a=a+b;
  b=a-b;                                 //Logic
  a=a-b;
  
  cout<<"After swap:"<<endl;                                //Showing a and b values After swap
  cout<<"Value of a: "<<a<<endl<<"Value of b: "<<b<<endl;
  
  return 0;
}
