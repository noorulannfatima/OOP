#include<iostream>
#include<string>
using namespace std;
//! Insertion Operator Overloading
class YoutubeChannel{
    public:
        string Name;
        int SubscribersCount;
// constructor
        YoutubeChannel (string name,int subscribersCount )
        {
            Name = name;
            SubscribersCount = subscribersCount;
        }
};  
// Operation Overlaoding
ostream& operator<<(ostream& COUT, YoutubeChannel& ytChannel){
    COUT<<"Name : "<<ytChannel.Name<<endl;
    COUT<<"Subscribers : "<<ytChannel.SubscribersCount<<endl;
    return COUT;
}
int main(){
    YoutubeChannel obj1 = YoutubeChannel("codebeauty", 234);
    YoutubeChannel obj2 = YoutubeChannel("Harry's Channel", 8699);
    //cout<< obj1<< obj2;
    // another method to call
    operator<<(cout, obj1);
    operator<<(cout, obj2);
    return 0;
}
