# include<iostream>
using namespace std;

class animals
{
public:

  string name;
  string id;
  string color;
  int age;
  int legs;


  animals(string Name, string Id,string Color)
  {
    name= Name;
    color=Color;
    id= Id;
    age= 12;
    legs=4;


  }


  void GetInfo()
  {
    cout<<"Name = "<<name<<endl;
    cout<<"Id = "<<id<<endl;
    cout<<"Color = "<<color<<endl;
    cout<<"age = "<<age<<endl;
    cout<<"legs = "<<legs<<endl;

  }
};




int main(){

  animals A("cat","34ex21","black");
  A.age =12;
  A.legs=4;
  animals B("dog ","65rt21","white");
  B.age =9;
  B.legs=4;
  animals C("cow","76mt45","white-black");
  C.age=15;
  C.legs=4;
  animals D("lion","78lo69","yellow");
  D.age=9;
  D.legs=4;

  A.GetInfo();
  B.GetInfo();
  C.GetInfo();
  D.GetInfo();


}