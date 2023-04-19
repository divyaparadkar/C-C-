#include<iostream>
#include<list>
using namespace std;

class youTubeChannel{
public:
   string Name ;
   string ownername;
   int SuscribersCount;
   list<string>publishedVideoTitles;

   youTubeChannel(string name, string Ownername){
    Name = name;
    ownername =Ownername;
    SuscribersCount =0;

   }

   void GetInfo(){

    cout<<"Name"<<Name<<endl;
    cout<<"ownername"<<ownername<<endl;
    cout<<"SuscribersCount"<<SuscribersCount<<endl;
    cout<<"videos:"<<endl;
    for(string videoTitle :publishedVideoTitles){
    cout<<videoTitle<<endl;

    }
   }
};
int main()
{
    youTubeChannel ytChannel("code with divya","Divya");
    ytChannel.publishedVideoTitles.push_back("C++ for bignners");
    ytChannel.publishedVideoTitles.push_back("HTML for bignners");
    ytChannel.publishedVideoTitles.push_back("C++ OOP");
    ytChannel.publishedVideoTitles.push_back("PYTHON for bignners");
    youTubeChannel ytChannel2("CODE WITH HARRY", "HARRY");

    ytChannel.GetInfo();
    ytChannel2.GetInfo();

}


