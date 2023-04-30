#include<bits/stdc++.h>
using namespace std;


class Person {
private:
       string name;
       string lastname;
       string course;
       int age ;
       string certificated; 
public:
   Person( string Name, string Lastname , string Course ,int age , string certificate)
   {

       name= Name;
       lastname=Lastname;
       course= Course;
       certificated= "yes";
      
   }
   void setName(string name){
    name = name;
   }

   string getName(){
    return name;
   }

   void setLastname(string lastname){
     lastname= lastname;
   }

   string getLastname(){
      return lastname;
   }

   void setCourse(string course){
       course =course;
   }

   string getCourse(){
      return course;
   }



   void setAge(int age){
      age =age;

   }

   int getAge(){
    return age;

   }

   void setCertificed(string certificed){
     certificated =certificated;
     
   }

   string getCertificate(){
     return certificated;
   }



   int main() 
   { 
    Person person("Divya ","paradkar","B.tech", 20,"yes");


    cout<<"Name"<<person.getName()<<endl;
    cout<<"Lastname"<<person.getLastname()<<endl;
    cout<<"Course"<<person.getCourse()<<endl;
    cout<<"Age "<<person.getAge()<<endl;
    cout<<"Certificated"<<person.getCertificate()<<endl;

    person.setName("Divya");
    person.setLastname("paradkar");
    person.setCourse("B.tech");
    person.setAge(20);
    person.setCertificed("yes");


    cout<<"Name = "<<person.getName()<<endl;
    cout<<"Lastname = "<<person.getLastname()<<endl;
    cout<<"course = "<<person.getCourse()<<endl;
    cout<<"Age = "<<person.getAge()<<endl;
    cout<<"certificated  = "<<person.getCertificate()<<endl;

    return 0;
   }

};


