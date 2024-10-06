#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,c,d;
        cin>>n>>c>>d;
        unordered_map<int,int>mp,mp1;
        // vi<vi> arr(n,vi(n,0));
        int dmini = INT_MAX;
        for(int i=0;i<n*n;i++){
                int x;
                cin>>x;
                mp[x]++;
                mp1[x]++;
                dmini = min(mini,x);
        }
        bool flag = true;
        int mini = dmini;
        for(int i=0;i<n;i++){
            int curr = mini;
            for(int j=0;j<n;j++){
                if(mp.count(curr)){
                    mp[curr]--;
                    if(mp[curr]==0)mp.erase(curr);
                    curr += c;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(!flag)break;
            mini+=d;
        }
        mini = dmini;
        for(int i=0;i<n;i++){
            int curr = mini;
            for(int j=0;j<n;j++){
                if(mp1.count(curr)){
                    mp1[curr]--;
                    if(mp1[curr]==0)mp.erase(curr);
                }
                else{
                    flag = false;
                    break;
                }
                curr += d;
            }
            if(!flag)break;
            mini+=c;
        }

        if(flag)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}