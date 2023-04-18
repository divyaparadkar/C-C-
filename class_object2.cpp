# include<iostream>
#include<list>
using namespace std;

class person{
public:
    string Name;
    string lastName;
    string collageName;
    int year;
    int age;
    int rollNo;
    list<string> Hobby;
};



int main()
{
    person p;

    p.Name="Divya";
    p.lastName="pawar";
    p.collageName="Sagar Institute of Science & Technology";
    p.year= 2;
    p.age=20;
    p.rollNo=187211011;
    p.Hobby={"volleyball","reading","coding","gaming"};


    cout<<"Name "<<p.Name<<endl;
    cout<<"lastName "<<p.lastName<<endl;
    cout<<"collageName "<<p.collageName<<endl;
    cout<<"year "<<p.year<<endl;
    cout<<"rollNo "<<p.rollNo<<endl;
    cout<<"hobby ";
    for(string hobby : p.Hobby)
    cout<<hobby<<endl;









}