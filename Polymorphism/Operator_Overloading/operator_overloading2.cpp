#include<iostream>
#include<string>
#include<list>
#include<algorithm> // for std::find
using namespace std;

struct YouTubeChannel {
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount) {
        Name = name;
        SubscribersCount = subscribersCount;
    }

    bool operator==(const YouTubeChannel& channel) const {
        return this->Name == channel.Name;
    }
};

ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel) {
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
    return COUT;
}

struct MyCollection {
    list<YouTubeChannel> myChannels;

    void operator+=(const YouTubeChannel& channel) {
        myChannels.push_back(channel);
    }
//To ensure that operator removes only first occurrence of a channel with same name.
// And handle the cases where channel to remove is not found in the collection.
    void operator-=(const YouTubeChannel& channel) {
        auto it = std::find(myChannels.begin(), myChannels.end(), channel);
        if (it != myChannels.end()) {
            myChannels.erase(it);
        } else {
            std::cerr << "Error: Channel " << channel.Name << " not found in the collection." << std::endl;
        }
    }
};

ostream& operator<<(ostream& COUT, MyCollection& myCollection) {
    for (YouTubeChannel ytChannel : myCollection.myChannels)
        COUT << ytChannel << endl;
    return COUT;
}

int main() {
    YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
    YouTubeChannel yt2 = YouTubeChannel("My second channel", 80000);

    MyCollection myCollection;
    myCollection += yt1;
    myCollection += yt2;
    myCollection -= yt2;
    cout << myCollection;

    // Trying to remove a channel not in the collection
    YouTubeChannel yt3 = YouTubeChannel("Nonexistent Channel", 100000);
    myCollection -= yt3;

    return 0;
}