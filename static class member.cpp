/*
a data member of a class can be qualified as static. the properties of static members variables are 
similar to that of c static variable. A static variables has  ceratin special to that C static variable
A static variable has certain special characteristics. these are:
1.It is initialized to zero when the first object of its is created. No other initialized is permitted.
2. only one copy of that member is created for the entire class and is shared by all the objects of that 
class, no matter how many objects are created .
3. It  is visible only within class but its lifetime is the entire program.
*/
#include<iostream>
using namespace std;
class item{
	static int count;
	int number;
	public:
		void getdata(int a)
		{
			number=a;
			count++; 
		}
		void getcount(){
			cout<<"count : ";
			cout<<count<<"\n";
		}
};
int item::count;// definition of static data member
int main()
{
	item a,b,c;//count is initialized to zero

	a.getcount();//display count
	b.getcount();
	c.getcount();
	
	a.getdata(100);//getting data to object a
	b.getdata(200);//getting data to object b
	c.getdata(300);//getting data to object c
	
	cout<<"After reading data "<<"\n";
	a.getcount();
	b.getcount();
	c.getcount();
}
