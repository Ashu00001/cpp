#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int *p=&i;
    cout<<p<<endl;
    p=p+2;
    cout<<p<<endl;


    cout<<p<<endl;
    p=p-2;
    cout<<p<<endl;

    double d=102.3;
    double *dp=&d;
    cout<<dp<<endl;
    dp++;
    cout<<dp<<endl;
    //this effectively adds 4 bytes to the p and goes to the address 4 bytes away if we add 2 the 8 bytes and so on.
//in case of char it get 1 bytes away in double 8 bytes
//p++ also does the same thing.
//if we create tw variable i and j doesn't neccesaraly means that they would be 4 bytes away.
//only works in case of array
}
