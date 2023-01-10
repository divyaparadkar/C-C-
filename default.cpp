#include<iostream>
using namespace std;

int add(int,int,int=0);
int main()
{
  int a,b;
  cout<<"Enter two numbers";
  cin>>a>>b;
  cout<<"sum is"<<add(a,b);
  int c;
  cin>>a>>b>>c;
  cout<<"\nEnter three numbers"<<add(a,b,c);

}
 int add(int x, int y, int z)
{
    return(x+y+z);
}
