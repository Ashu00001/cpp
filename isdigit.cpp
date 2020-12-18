#include<bits/stdc++.h>
#include<cctype>
#include<string.h>
using namespace std;
char* check(char *a)
{
    int count=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(isdigit(a[i]))
        {
            strcpy(a,"yes");
            count++;
            break;
            
        }
    }
    if(count==0);
    {
        strcpy(a,"no");
    }
    return a;
}
int main()
{
    char a[100];
     cin>>a;
     cout<<check(a);
    
}
