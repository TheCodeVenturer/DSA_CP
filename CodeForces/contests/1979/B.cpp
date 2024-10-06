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
        ll x,y;
        cin>>x>>y;
        cout<<((x+y)%(x-y)==0?(x-y):((x+y)%(x-y)))<<endl;
    }
    return 0;
}