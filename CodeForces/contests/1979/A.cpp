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
        int n;
        cin>>n;
        vi a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int mini=INT_MAX;
        for(int i=1;i<n;i++)
            mini = min(mini,max(a[i],a[i-1]));
        cout<<(mini-1)<<endl;
    }
    return 0;
}