#include<iostream>
using namespace std;
class set{
	int m,n;
	public:
		void input();
		void display();
		int  largest();
		
};
int set::largest()
{
	if(m>=n)
	{
		return m;
	}
	else
	return n;
}
void set::input()
{
	cout<<"values of m,n : "<<"\n";
	cin>>m>>n;
}
void set::display(){
	cout<<"larger value out of m and n : "<<largest()<<"\n";
}
int main()
{
	set A;
	A.input();
	A.display();
}
