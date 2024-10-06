#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int temp = 0;
        if(a*2>b){
            temp = (n/2) * b;
            if(n%2)temp += a;
            int s = (n/3) * (a+b);
            if(n%3==1)s+=a;
            else if(n%3==2)s+=min(2*a,b);
            temp = min(temp,s);
            temp = min(temp,n*a);
        }
        else if(a*2<=b){
            temp = n*a;
        }
        cout<<temp<<endl;
    }
    return 0;
}