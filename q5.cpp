#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    char  str[20], *p;

    cout << "Input about 10 characters of string\n";
    cin >> str;
    int len=0;
    for(;str[len]!='\0';len++);
    // Pointer variable refers to address of string 
    p=str;
    cout<<"\nTHE NAME IS: "<<p<<"\n \n";
    // Show string by shifting top character of string to right
    for(int i=0;i<len;i++)
    {
    	cout<<p<<endl;
    	p++;
    }
    
    return (0);
}
