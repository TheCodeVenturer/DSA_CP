#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define int long long
#define ll long long
#define vi vector <int>
#define endl '\n'
#define all(c) (c).begin(),(c).end()
#define sz(a) ((int)(a.size()))
#define pb emplace_back
#define INPUT_ARRAY(arr, n) for (int i = 0; i < n; i++)  cin >> arr[i];
void solve(){
    int mini = INT_MAX;
    string str;
    cin>>str;
    string left="0";
    for(int i=0;i<sz(str);i++){
        string right = str.substr(i+1);
        mini = min((ll)stoi(left+right),mini);
        left.push_back(str[i]);
    }
    cout<<mini<<endl;
}
#undef int
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