/*

Manipulators are the opeerators that are used to format the data display. the most commonly used manipulators are endl and setw
endl is same like \n
if m=2597 n=14 p=175
m = 2597
n = 14
p = 175
are not ideal to make it ideal we use setw;
by using set w we will get
m= 2597
n=   14
p=  175
the set w 
*/
#include<iostream>
#include<iomanip> // for setw
using namespace std;
int main()
{
	int Basic = 950,Allowance = 95, Total= 1045;
	cout<<setw(10)<<"Basic"<<setw(10)<<Basic<<endl;
	cout<<setw(10)<<"Allowance"<<setw(10)<<Allowance<<endl;
	cout<<setw(10)<<"Total"<<setw(10)<<Total<<endl;
}
