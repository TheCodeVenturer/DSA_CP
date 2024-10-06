#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
#define endl '\n'
#define all(c) (c).begin(),(c).end()
#define sz(a) ((int)(a.size()))

int dfs(int src,vector<int>&a,vector<int>vis){
    if(vis[src]==1){
        return 0;
    }
    vis[src] = 1;
    return dfs(a[src],a,vis) + 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            x--;
            a[i] = x;
        }
        vector<int>vis(n,0);
        int mini = INT_MAX;
        for(int ele:a){
            mini = min(mini,dfs(ele,a,vis));
        }
        if(mini>2)mini=3;
        cout<<mini<<endl;
    }
    return 0;
}