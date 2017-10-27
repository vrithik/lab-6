#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

/*Program to Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method.*/
int main()
{
  cout<<"Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method.";
  char name[50];
  char *nameptr;
  cout<<"\n \nEnter your name: ";
  cin.getline(name,50);
  cout<<"\n \nPROGRAM TO PRINT STRING BY NORMAL INDEX METHOD: \n";
  for(int i=0;name[i]!='\0';i++)
  {
   cout<<name[i];
  } 
  nameptr=name;
  cout<<"\n \nPROGRAM TO PRINT STRING BY POINTER METHOD: \n";
  cout<<nameptr;
  cout<<endl;
  return 0;
}
