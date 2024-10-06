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
        int m,n;
        cin>>n>>m;
        string s;
        cin>>s;
        int ans = 0;
        vector<int>v(7,m);
        for(char ch:s){
            v[ch-'A']--;
        }
        for(int ele:v)if(ele>0)ans+=ele;
        cout<<ans<<endl;
    }
    return 0;
}