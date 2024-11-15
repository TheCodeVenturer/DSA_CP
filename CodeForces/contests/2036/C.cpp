#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
#define endl '\n'
#define all(c) (c).begin(),(c).end()
#define sz(a) ((int)(a.size()))
#define pb emplace_back
#define push_back emplace_back
#define INPUT_ARRAY(arr, n) for (int i = 0; i < n; i++)  cin >> arr[i];
void solve(){
    string s;
    cin>>s;
    set<int>s1;
    for(int i=0;i<s.size()-3;i++){
        if(s[i]=='1' && s[i+1] =='1' && s[i+2]=='0' && s[i+3]=='0')s1.insert(i);
    }
    int q;
    cin>>q;
    while(q--){
        int id;
        char ch;
        cin>>id>>ch;
        id--;
        if(s[id] != ch){
            s[id] = ch;
            bool flag=true;
            for(int i=id-3;i<=id;i++){
                if(s1.count(i) && flag){
                    s1.erase(i);
                    flag= false;
                }
                else if(i>=0 && i+3<s.size() && s[i]=='1' && s[i+1] =='1' && s[i+2]=='0' && s[i+3]=='0'){
                    s1.insert(i);
                    break;
                }
            }
        }
        cout<<(s1.size()?"YES\n":"NO\n");
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
//Made By Niraj Modi
//username :- TheCodeVenturer
//profile :- (https://codeforces.com/profile/TheCodeVenturer)