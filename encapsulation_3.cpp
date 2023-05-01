#include<bits/stdc++.h>
using namespace std;

class circle { 
private:

    float area;
    float radius;

public:
    void getRadius()
    {
        cout<<"Enter radius \n";
        cin>>radius;
    }

    void findArea()
    {
        area = 3.14* radius *radius ;
        cout<<"Area of circle ="<<area;
    }
      


};

int main()
{
    circle C;
    C.getRadius();
    C.findArea();

}