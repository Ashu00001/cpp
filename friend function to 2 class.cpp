#include<iostream>
using namespace std;
class ABC;//forward declarartion
class XYZ{
	int x;
	public:
		void setvalue(int i)
		{
			x=i;
		}
		friend void max(XYZ,ABC);
};
class ABC{
	int a;
	public:
		void setvalue(int i)
		{
			a=i;
		}
		friend void max(XYZ,ABC);
};
void max(XYZ m,ABC n)//definition of function
{
	if(m.x>=n.a)
	{
		cout<<m.x;

	}
	else{
		cout<<n.a;
	}
}
int main()
{
	ABC abc;
	XYZ xyz;
	abc.setvalue(10);
	xyz.setvalue(20);
	max(xyz,abc);
}
