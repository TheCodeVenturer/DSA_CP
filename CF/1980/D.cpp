#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
#define endl '\n'
#define all(c) (c).begin(),(c).end()
#define sz(a) ((int)(a.size()))
int gcd(int a, int b) {
    if (a < b) {
        return gcd(b, a);
    }
    if (b == 0) return a;
    return gcd(b, a % b);
}
bool checkNonDecreasing(vector<int>& arr) {
    if(arr[0]>arr[1]){
        arr.erase(arr.begin());
        vector<int>dup = arr;
        sort(all(dup));
        if(dup==arr)return true;
        return false;
    }
    int count = 0;
    int j=0;
    int idx=-1;
    for (int i = 1; i < arr.size(); i++) {
        if(arr[i]>=arr[j]){
            j++;
        }
        else{
            count++;
            if(count>1)return false;
            if(arr[i]>=arr[j-1])j++;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        vector<int>gcds(n-1);
        for(int i=1;i<n;i++)
            gcds[i-1] = gcd(v[i],v[i-1]);
        // for(int ele:gcds)cout<<ele<<" ";
        // cout<<endl;
        vector<int> dup = gcds;
        sort(all(dup));
        // int j=0,i=0;
        // for(;i<n;i++){
        //     if(gcds[i]==dup[j])j++;
        // }
        // if(i-j<=2 || i==j)cout<<"YES\n";
        // else cout<<"NO\n";
        if(checkNonDecreasing(gcds))cout<<"YES\n";
        else cout<<"NO\n";
    }   
    return 0;
}