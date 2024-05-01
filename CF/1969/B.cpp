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
        string s1;
        cin>>s1;
        int i=0,j=0;
        ll ans = 0;
        while(i<s1.size() && s1[i]=='0'){
            i++;
            j++;
        }
        while(j<s1.size()){
            if(s1[j]=='0'){
                ans += (j-i+1);
                i++;
            }
            j++;
        }
        cout<<ans<<endl;
    }
    return 0;
}