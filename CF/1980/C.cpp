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
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        int m;
        cin>>m;
        map<int,int>d;
        int last ;
        for(int i=0;i<m;i++){
            int temp;
            cin>>temp;
            d[temp]++;
            last = temp;
        }
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if(d.count(b[i])){
                    d[b[i]]--;
                    if(d[b[i]]==0)d.erase(b[i]);
                }
                else{
                    cout<<"NO\n";
                    goto end;
                }
            }
        }
        if(!d.empty()){
            if(count(all(b),last)==0){
                cout<<"NO\n";
                goto end;
            }
        }
        cout<<"YES\n";
        end:;
    }
    return 0;
}