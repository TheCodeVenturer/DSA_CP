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
    int n,k;
    cin>>n>>k;
    unordered_map<int,int>m1;
    while(k--){
        int b,c;
        cin>>b>>c;
        m1[b] += c;
    }
    vector<int>v1;
    for(auto p1:m1)v1.emplace_back(p1.second);
    sort(all(v1),greater<int>());
    long long sol=0;
    int size = v1.size();
    size = min(size,n);
    for(int i=0;i<size;i++)sol += v1[i];
    cout<<sol<<endl;
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