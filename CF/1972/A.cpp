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
        vi a(n),b(n),c(n+n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(all(a));
        sort(all(b));
        int j=n-1;
        for(int i=n-1;i>=0;i--){
            if(a[i]<=b[j]){
                j--;
            }
        }
        cout<<(j+1)<<endl;

    }
    return 0;
}