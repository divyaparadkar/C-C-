#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a, b, c;
   cout<<"Enter the value of a,b";
   cin>>a>>b;
   try
{
    if(b==0)
    throw"divide the value";
    else

    c=a/b;
    cout<<"Result"<<c;
}
catch(int x)
{
    cout<<c;
}
    return 0;
}
