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
        string s;
        cin>>s;
        int k=0;
        for(char ch:s){
            k += (ch-'a');
        }
        cout<<k<<" ";
        cout<<"YES\n";
    }
    return 0;
}