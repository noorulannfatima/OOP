#include<iostream>
#include <list>
using namespace std;

class YoutubeChannel{
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
public:
    // setter & getter method
    string getName() {
        return Name;
    }
    void setName(string name) {
        Name = name;
    }
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
int main(){
    YoutubeChannel ytchannel("CodeHub", "Alex");
    ytchannel.PublishVideo("Html & CSS Course");
    ytchannel.PublishVideo("Java Course");
    ytchannel.PublishVideo("Python Course");

    ytchannel.Subscribe();
    ytchannel.Subscribe();
    ytchannel.Subscribe();
    ytchannel.Unsubscribe();

    ytchannel.GetInfo();

    return 0;
}