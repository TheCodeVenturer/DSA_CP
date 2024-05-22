#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
#define endl '\n'
#define all(c) (c).begin(),(c).end()
#define sz(a) ((int)(a.size()))
#define print(a) for(auto x:a) cout<<x<<" "; cout<<endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vi a(n-1);
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
        vi b(n);
        b[n-1] = 1e9;
        for(int i=n-2;i>=0;i--){
            b[i] = b[i+1] - a[i];
        }
        print(b);
    }
    return 0;
}