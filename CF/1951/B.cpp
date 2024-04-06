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
        int n,k;
        cin>>n>>k;
        k--;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)cin >>v1[i];
        int ele = v1[k];
        int i=0;
        while(i<k && v1[i]<ele)i++;
        int sol=(i==k)?-i:i;
        int c = (i==0)?0:1;
        i++;
        while(i<n && v1[i]<ele)c++,i++;
        cout<<(sol>0?max(sol-1,c):(c-sol))<<endl;
    }
    return 0;
}