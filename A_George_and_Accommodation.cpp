#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> people_in_room;//person in room
    vector<int> capacity;//
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        people_in_room.push_back(t);
        cin>>t;
        capacity.push_back(t);
    }
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(((capacity[i]- people_in_room[i]) >= 2)){
            ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}