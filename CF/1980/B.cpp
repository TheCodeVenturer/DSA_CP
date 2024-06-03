#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
#define endl '\n'
#define all(c) (c).begin(),(c).end()
#define sz(a) ((int)(a.size()))
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,f,k;
        cin>>n>>f>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int ele = v[f-1];
        sort(all(v),greater<int>());
        if(v[k-1]<ele)cout<<"YES\n";
        else if(v[k-1]>ele)cout<<"NO\n";
        else{
            int cnt = count(all(v),ele);
            if(cnt==1 || k==n || v[k]!=v[k-1])cout<<"YES\n";
            else cout<<"MAYBE\n";
        }
    }
    return 0;
}