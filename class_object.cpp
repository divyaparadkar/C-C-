#include<iostream>
#include<list>
using namespace std;

class youTubeChannel{
public:
   string Name ;
   string ownername;
   int SuscribersCount;
   list<string>publishedVideoTitles;
};
int main()
{
    youTubeChannel ytChannel;
    ytChannel.Name="code with divya";
    ytChannel.ownername="Divya";
    ytChannel.SuscribersCount=1290;
    ytChannel.publishedVideoTitles={"C++","HTML","CSS","PYTHON","OOP","DSA"};

    cout<<"Name"<<ytChannel.Name<<endl;
    cout<<"ownername"<<ytChannel.ownername<<endl;
    cout<<"SuscribersCount"<<ytChannel.SuscribersCount<<endl;
    cout<<"videos:"<<endl;
    for(string videoTitle : ytChannel.publishedVideoTitles){
    cout<<videoTitle<<endl;
    }



}