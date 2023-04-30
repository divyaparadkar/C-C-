#include<bits/stdc++.h>
using namespace std;

class youTubeChannel{
private:
   string Name ;
   string ownername;
   int SubscribersCount;
   list<string>publishedVideoTitles;
   public:
   youTubeChannel(string name, string Ownername){

    Name = name;
    ownername =Ownername;
    SubscribersCount =0;

   }

 void GetInfo(){

    cout<<"Name"<<Name<<endl;
    cout<<"ownername"<<ownername<<endl;
    cout<<"SuscribersCount"<<SubscribersCount<<endl;
    cout<<"videos:"<<endl;
    for(string videoTitle :publishedVideoTitles){
    cout<<videoTitle<<endl;

    }
   }
  void Subscribe(){
       SubscribersCount++;

  }
   void Unsubscribe(){
       if (SubscribersCount>0)
          SubscribersCount--;
   }

   void PublishVideo(string title){
        publishedVideoTitles.push_back(title);
   }

};
int main()
{
    youTubeChannel ytChannel("code with divya","Divya");
    ytChannel.PublishVideo("C++ for bignners");
    ytChannel.PublishVideo("C++ OOP");
    ytChannel.PublishVideo("HTML for bignners");
    ytChannel.PublishVideo("PYTHON for bignners");
    
    
     
     ytChannel.Unsubscribe();
    ytChannel.GetInfo();
    

}

