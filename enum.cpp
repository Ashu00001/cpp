/*
by default the num are designed integer values starting with 0 for the first enumerator 1 for the second and so on .we can override the default by explicitly 
assigning integeer values to the enum;
eg enum color{red,blue=4,greemn=8}
*/
#include<iostream>
using namespace std;
enum shape{
	circle, //automatically initializes 0
	rectangle,//automatically initializes 1
	triangle//automatically initializes 2
	
};
int main()
{
	cout<<"Enter shape code : ";
	int code;
	cin>>code;
	while(code >= circle && code<=triangle)
	{
		switch(code)
		{
			case circle: 
			{
				cout<<"this is circle"<<endl;	
				break;
			}
			case rectangle: 
			{
				cout<<"this is rectangle\n";
				break;
			}
			case triangle:
				{
					cout<<"this is triangle\n";
				}
		}
	}
}
