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
        sort(all(a));
        int idx = ceil(n/2.0)-1;
        int count=1;
        while(idx+count<n && a[idx]==a[idx+count]){
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}