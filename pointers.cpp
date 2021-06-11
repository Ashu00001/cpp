#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int *p=&i;
    int *q=p;
    cout<<sizeof(p)<<endl;
    cout<<"i : "<<i<<endl;
    cout<<"*p : "<<*p<<endl;
    i++;
    cout<<"i++"<<endl;
     cout<<"i : "<<i<<endl;
    cout<<"*p : "<<*p<<endl;
    int a=*p;
    cout<<"a=*p"<<endl;
    cout<<"a++"<<endl;
    a++;
     cout<<"a : "<<a<<endl;
    cout<<"*p : "<<*p<<endl;

    i=12;
    cout<<"i=12"<<endl;
    cout<<"i : "<<i<<endl;
    cout<<"*p : "<<*p<<endl;

    *p=23;
    cout<<"*p=23;"<<endl;
    cout<<"i : "<<i<<endl;
    cout<<"*p : "<<*p<<endl;

    (*p)++;
    cout<<"(*p)++;"<<endl;
    cout<<"i : "<<i<<endl;
    cout<<"*p : "<<*p<<endl;

}
