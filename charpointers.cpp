#include<iostream>
using namespace std;
int main()
{
int a[]={1,2,3};
cout<<a<<endl;//print address of a
char b[]="abc";
cout<<b<<endl;//print the whole b

char *c=&b[0];
cout<<c<<endl;//prints the b as well

char c1='a';
char *pc=&c1;

cout<<c1<<endl;
cout<<pc<<endl;
}
