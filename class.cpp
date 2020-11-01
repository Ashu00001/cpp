#include<iostream>
using namespace std;
class item
{
	int number;//private by  default
	float cost;//private by  default
	public :
		void getdata(int a,float b);//prototype declaration and to be defined
		void putdata()
		{
			cout<<"number : "<<number<<"\n";
			cout<<"cost : "<<cost<<"\n";
		}
};
//member function definition
void item::getdata(int a,float b)//use membership label
{
	number =a;//private  variable
	cost=b;//directly used
}
int main()
{
	item x;//create  object x
	cout<<"\nobject x "<<"\n";
	x.getdata(100,299.95);//call member function
	x.putdata();//call member function
	item y;//another object
	cout<<"\nobject y \n";
	y.getdata(200,175.50);
	y.putdata();
}
