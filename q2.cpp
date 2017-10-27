#include <iostream>
using namespace std;

/*Program to understand the concepts of pointer*/
int main()
{
  cout<<"Program to understand the concepts of pointer";
  int a=0,b=0;
  int *p;
  //QUESTION A: Point p to a. And store the value pointed by p in b. Print the values of a, b and *p. 
  p=&a;
  b=*p;
  cout<<"\n \nValue of \"a\" is: "<<a;
  cout<<"\nValue of \"b\" is: "<<b;
  cout<<"\nValue of *p is: "<<p;
  //QUESTION B: Assign values a=2 and b = 3. Print the values of a, b and *p. 
  a=2;
  b=3;
  cout<<"\n \nValue of \"a\" is: "<<a;
  cout<<"\nValue of \"b\" is: "<<b;
  cout<<"\nValue of *p is: "<<p;
  //QUESTION C: Now point p to b. Print the values of a, b and *p.
  p=&b;
  cout<<"\n \nValue of \"a\" is: "<<a;
  cout<<"\nValue of \"b\" is: "<<b;
  cout<<"\nValue of *p is: "<<p;
  return 0;
}
