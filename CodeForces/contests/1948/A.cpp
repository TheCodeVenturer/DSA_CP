#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2){
            cout<<"NO";
        }
        else{
            cout<<"YES\n";
            for(int i=0;i<n/2;i++){
                if(i%2)cout<<"AA";
                else cout<<"BB";
            }
        }
        cout<<endl;
    }
    return 0;
}