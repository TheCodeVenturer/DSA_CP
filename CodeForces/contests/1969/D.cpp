#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define vi vector <int>
#define endl '\n'
#define all(c) (c).begin(),(c).end()
#define sz(a) ((int)(a.size()))
class tri{
    public:
    int a,b,c;
    tri(int a,int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
    
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        vector<tri>v;
        for(int i=0;i<n;i++){
            // if(b[i]>a[i])
                v.push_back({a[i],b[i],b[i]-a[i]});
        }
        if(v.size()<k){
            cout<<0<<endl;
            continue;
        }
        sort(all(v),[&](tri a,tri b){
            if(a.b!=b.b)
                return a.b>b.b;
            return a.c<b.c;
        });
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i].a<<" "<<v[i].b<<" "<<v[i].c<<endl;
        // }
        ll tot = 0;
        for(int i=0;i<v.size();i++){
            tot -= v[i].a;
        }
        for(int i=k;i<v.size();i++){
            tot += v[i].b;
        }
        ll maxi = tot;
        for(int i=0;i<v.size()-k;i++){
            tot += v[i].a;
            tot -= v[k+i].b;
            maxi = max(maxi,tot);
        }
        cout<<(max(maxi,0ll))<<endl;
        // cout<<"-------------------\n";
    }
    return 0;
}