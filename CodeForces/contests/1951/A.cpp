#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int ones = 0;
        for(char &ch:s)
            if(ch=='1')ones++;
        if(ones==2){
            bool f=1;
            for(int i=0;i<n-1;i++){
                if(s[i]==s[i+1] && s[i]=='1'){
                    cout<<"NO"<<endl;
                    f=0;
                    break;
                }
            }
            if(f)cout<<"YES"<<endl;
        }
        else if(ones%2==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}