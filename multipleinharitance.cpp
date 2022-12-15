#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    int a=5;
    A()
    {
    cout<<"Enter the value of a in constructor"<<endl;
    }
};
class B
{
    public:
    int b =10;
    B()
    {
    cout<<"Enter the value of b in construct0r"<<endl;
    }
};
class C: public A, public B
{
    public:
    int c =15;
    C()
    {
        cout<<"Enter the value of c in constructor "<<endl;
        cout<<"Class C inherits from class A and class B "<<endl;
    }
};
int main()
{
    C obj;
    cout<<"a ="<<obj.a<<endl;
    cout<<"b ="<<obj.b<<endl;
    cout<<"c ="<<obj.c <<endl;

    return 0;
}