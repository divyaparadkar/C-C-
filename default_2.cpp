#include<iostream>
using namespace std;

int mul(int ,int ,int=0);
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"mul is"<<mul(a,b);
    int c;
    cout<<"Enter three value";
    cin>>a>>b>>c;
    cout<<"mul is :"<<mul(a,b,c);

}
  int mul(int x, int y, int z)
  {
    return(x*y*z);
  }