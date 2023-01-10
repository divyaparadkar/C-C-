#include<bits/stdc++.h>
using namespace std;

int area(int, int);
float area(int);
  
 int main()
{
    int r;
    cout<<"Enter the radius of circle";
    cin>>r;

    float A=area(r);
    cout<<"\n area of circle is :"<<A;

    int l,b,a;
    cout<<"\n Enter the length and breadth of rectangle";
    cin>>l>>b;
    a=area(l,b);
    cout<<"Area is "<<a;

}

    float area(int R)
{
    return(3.14*R*R);
}


int area(int l, int b)
{
    return(l*b);
}