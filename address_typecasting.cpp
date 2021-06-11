#include<iostream>
using namespace std;
int main()
{
int a=65;
char b=a;//implicit converson by compiler
cout<<b<<endl;// will print a
cout<<"\n\n";
int i=65;
int *p=&i;
char *pc=(char*)p;

cout<<p<<endl;//would print the address
cout<<pc<<endl;//would print the first bit if int block
cout<<"\n\n";


cout<<*p<<endl;
cout<<*pc<<endl;
cout<<*(pc + 1)<<endl;
cout<<*(pc + 2)<<endl;
cout<<*(pc + 3)<<endl;
/*
the link for endian system
https://www.geeksforgeeks.org/little-and-big-endian-mystery/*/
}
