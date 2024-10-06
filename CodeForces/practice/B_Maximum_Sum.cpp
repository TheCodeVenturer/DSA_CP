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
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vi v1(n);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        ll maxi = 0, sum = 0, tot = 0;
        // kadane's algorithm
        for(int i=0;i<n;i++){
            tot += v1[i];
            sum += v1[i];
            if(sum<0){
                sum = 0;
            }
            // cout<<sum<<" ";
            maxi = max(maxi,sum);
        }
        // cout<<endl<<maxi<<endl;
        tot = (tot%mod + mod)%mod;
        if(maxi==0){
            tot = (tot + mod)%mod;
        }
        else{
            while(k--){
                tot = (tot + maxi)%mod;
                maxi = (2*maxi)%mod;
            }
        }
        cout<<tot<<endl;
    }
    return 0;
}