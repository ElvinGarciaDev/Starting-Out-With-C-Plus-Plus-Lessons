#include <iostream>
#include <string>
using namespace std;

struct YouTubeChannel
{
        string Name;
        int SubscribersCount;

        YouTubeChannel(string name, int subscribersCount) //Constructor
        {
            Name = name;
            SubscribersCount =  subscribersCount;
        }

};

//Operator function
YouTubeChannel YouTubeChannel::operator<<(ostream& COUT, YouTubeChannel& ytChannel)
{
    COUT <<"Name: " << ytChannel.Name << endl;
    COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
}

int main()
{
    YouTubeChannel yt1("CodeBeauty", 75000);
    cout << yt1;


    return 0;
}