#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
int main()
{
    set<int> v1 = {10,11,101,111,1001,1011,1101,1111,10001,10011,10101,10111,11001,11011,11101,11111};
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag=true;
        while(n>1 && flag){
            flag = false;
            if(v1.count(n)){
                n=1;
                break;
            }
            for(int div:v1){
                if(n%div==0){
                    flag=true;
                    n /= div;
                    break;
                }
            }
        }
        if(n==1)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}