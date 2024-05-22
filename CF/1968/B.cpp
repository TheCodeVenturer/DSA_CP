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
    cin >> t;
    while(t--){
        int m,n;
        cin>>m>>n;
        string s1,s2;
        cin>>s1>>s2;
        int k = 0;
        int i = 0;
        while(k<m && i<n){
            if(s1[k] == s2[i]){
                k++;
            }
            i++;
        }
        cout<<k<<endl;
    }
    return 0;
}