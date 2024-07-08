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
        int n,k;
        cin>>n>>k;
        vi a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        if(k>1)cout<<"YES";
        else{
            vi b = a;
            sort(all(b));
            if(b==a)cout<<"YES";
            else cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}