#include<iostream>
#include <list>
using namespace std;

class YoutubeChannel{
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;
public:
    YoutubeChannel(string name, string ownername){  //constructor
    Name = name;  
    OwnerName = ownername;
    SubscribersCount= 0;
}
    void GetInfo(){     // GetInfo Method
    cout<< "Channel Name : "<<Name<<endl;
    cout<<"Owner Name : "<<OwnerName<<endl;
    cout<<"Subscribers : "<<SubscribersCount<<endl;
    cout<<"Videos : "<<endl;
    for(string videoTitle : PublishedVideoTitles){
        cout<<videoTitle<<endl;
    }
}    
    void Subscribe(){
        SubscribersCount++;
    }
    void Unsubscribe(){
        if(SubscribersCount<0)
        SubscribersCount--;
    }
    void PublishVideo(string Title){
    PublishedVideoTitles.push_back(Title);
}
};
class CookingYoutubeChannel: public YoutubeChannel{
    public:
    CookingYoutubeChannel(string name, string ownername):YoutubeChannel(name, ownername){
    }
    void OnlineSessions(){
        cout<<OwnerName<<" Online Sessions..."<<endl;
    }
};
int main(){
    YoutubeChannel ytchannel("CodeHub", "Alex");
    ytchannel.PublishVideo("Html & CSS Course");
    ytchannel.PublishVideo("Java Course");
    ytchannel.Subscribe();
    ytchannel.Subscribe();
    ytchannel.Unsubscribe();
    ytchannel.GetInfo();
    CookingYoutubeChannel ytchannel1("Amna's Kitchen", "Amna");
    ytchannel1.PublishVideo("Sindhi Buryani");
    ytchannel1.PublishVideo("Choco Lava Cake");
    ytchannel1.Subscribe();
    ytchannel1.Subscribe();
    ytchannel1.Unsubscribe();
    ytchannel1.GetInfo();
    ytchannel1.OnlineSessions();
    CookingYoutubeChannel ytchannel2("Tania's Kitchen", "Tania");
    ytchannel2.Subscribe();
    ytchannel2.Subscribe();
    ytchannel2.Subscribe();
    ytchannel2.Subscribe();
    ytchannel2.Unsubscribe();
    ytchannel2.GetInfo();
    ytchannel2.OnlineSessions();


    return 0;
}