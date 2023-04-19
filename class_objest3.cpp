#include <iostream>
#include <list>
using namespace std;


class collage {
public:
      string name;
      string id;
      string address;
      string city;
      int madeinyear;
      int depertments;
      list<string>cources;
};

int main()
{
    collage clg;
    clg.name = "Sagar institute of science and technology ";
    clg.id ="238SISTEC";
    clg.address="Gandhi nagar, Airport road ";
    clg.city ="Bhopal";
    clg.madeinyear =2011;
    clg.depertments = 5;
    clg.cources ={"CSE","AIDS","EX","EC","ME","CIVIL","CYBER SCURITY"};

    cout<<"name = "<< clg.name <<endl;
    cout<<"id = "<< clg.id <<endl;
    cout<<"address = "<< clg.address <<endl;
    cout<<"city = "<< clg.city <<endl;
    cout<<"madeinyear = "<< clg.madeinyear <<endl;
    cout<<"depertments= "<< clg.depertments <<endl;
    cout<<"branch =";
    for(string branch :clg.cources)
    {
        cout<<branch<<endl;
    }

}